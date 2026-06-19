#include "mm_behaviors/mm_bt_node.hpp"
using namespace std::chrono_literals;
/*
 base_long_path_pose="{@base_long_path_pose}"
                          base_initial_pose="{@base_initial_pose}"/>

*/
 
class WsttaBtPipelineNode : public rclcpp::Node {
    public:
        explicit WsttaBtPipelineNode(const rclcpp::NodeOptions & options) : Node("wstta_bt_node",options) {
            callback_group_ = this->create_callback_group(
            rclcpp::CallbackGroupType::Reentrant);
            //
            if (!this->has_parameter("base_long_path_pose")) {
                this->declare_parameter<std::vector<double>>( "base_long_path_pose",{5.0, 6.0, 0.0, 0.0});
            }
            if (!this->has_parameter("base_initial_pose")) {
                this->declare_parameter<std::vector<double>>( "base_initial_pose",{0.0, 0.0, 0.0, 0.0});
            }

            if (!this->has_parameter("unload_poses")) {
                this->declare_parameter<std::vector<double>>( "unload_poses",{3.0, 0.0, 0.0, 0.0});

            }

            if (!this->has_parameter("circle_radius")) {
                this->declare_parameter<double>( "circle_radius",0.3200);
            }
            if (!this->has_parameter("theta_shift_amplitude")) {
                 this->declare_parameter<double>( "theta_shift_amplitude",M_PI/2);
            }
            if (!this->has_parameter("tree_xml_file")) {
                  this->declare_parameter<std::string>("tree_xml_file","");
            }
            if (!this->has_parameter("navigation_frame")) {
                 this->declare_parameter<std::string>("navigation_frame","map");
            }
            if (!this->has_parameter("arm_predefined_states")) {
                 this->declare_parameter<std::vector<std::string>>("arm_predefined_states",std::vector<std::string>{});
            }
             if (!this->has_parameter("ee_predefined_states")) {
                 this->declare_parameter<std::vector<std::string>>("ee_predefined_states",std::vector<std::string>{});
            }

            first_ = true;
            bat = 100;
            //ObjectsPoseListen = this->create_wall_timer( 5s,
            //std::bind(&WsttaBtPipelineNode::set_object_pose, this));
             
        }
       ~WsttaBtPipelineNode()
            {
            
          tree_.haltTree();

        }
        void tick_function() {
            rclcpp::Rate rate(2);
            while(rclcpp::ok()){
                if( first_) {
                    create_behavior_tree();
                    first_ = false;
                } 
                //bool is_container_full = global_bb->get<bool>("is_container_full");
                //bool is_go_to_initials = global_bb->get<bool>("is_go_to_initials");
                //if(is_container_full && is_go_to_initials){
                //std::this_thread::sleep_for(30s);
                //}
                battery_state_listener();
                
                tree_.tickOnce();

                //set_object_pose();
                rate.sleep();
            }


        }

        void read_text_in_speak(std::string t){
            espeak_Initialize(AUDIO_OUTPUT_PLAYBACK, 0, NULL, 0);
            espeak_Synth(
                t.c_str(),
                strlen(t.c_str()) + 1,
                0,
                POS_CHARACTER,
                0,
                espeakCHARS_AUTO,
                NULL,
                NULL);

            espeak_Synchronize();

          }

        void set_object_pose(){
            const int width = 9;
            const int height = 0;

            // Random engine
            std::random_device rd;
            std::mt19937 gen(rd());

            // Uniform distributions
            std::uniform_int_distribution<> x_dist(-width, width - 1);
            std::uniform_int_distribution<> y_dist(-width, width - 1);
            std::uniform_int_distribution<> z_dist(0, height);

            // Generate random cell
            int x = x_dist(gen);
            int y = y_dist(gen);
            int z = z_dist(gen);
            auto object = Pose3D();
            object.set__x(x);object.set__y(y);object.set__z(z);
            if(auto any_locked = global_bb->getAnyLocked("objects_poses_vect")){
                std::vector<Pose3D>* Poses = any_locked->castPtr<std::vector<Pose3D>>();
                if(!any_locked->empty()){   
                    RCLCPP_INFO(this->get_logger(),"stacking object pose !");
                    Poses->push_back(object);
                }
                else{
                    Poses->assign({object});

                }
           
            }
            else{
                RCLCPP_INFO(this->get_logger(),"cant't find variable !");
            }
        }

        void create_behavior_tree() {
            
            // Build a behavior tree from XML and set it up for logging
    
            moveit_cpp_ptr = std::make_shared<moveit_cpp::MoveItCpp>(shared_from_this());
            RCLCPP_INFO(this->get_logger(),"loading planning scene monitor and scene services!");
            moveit_cpp_ptr->getPlanningSceneMonitorNonConst()->providePlanningSceneService();
          

            BT::BehaviorTreeFactory factory;
            tree_xml_file_ = this->get_parameter("tree_xml_file").as_string();
            factory.registerNodeType<WSTTA::PlanForTheArm>("PlanForTheArm",shared_from_this(),moveit_cpp_ptr);
            factory.registerNodeType<Navigate>("NavigateToPose", shared_from_this());
            factory.registerNodeType<BatteryChecker>("CheckBattery", shared_from_this());
            factory.registerNodeType<CheckGoToInitials>("CheckGoToInitials",shared_from_this());
            factory.registerNodeType<WSTTA::ExecuteArmPlan>("ExecuteArmPlan", shared_from_this(),moveit_cpp_ptr);
            factory.registerNodeType<WSTTA::PlanExecForGripper>("PlanExecForGripper", shared_from_this(),moveit_cpp_ptr);
            // factory.registerNodeType<StackObjectPose>("StackObjectPose", shared_from_this());
            factory.registerNodeType<ContainerChecker>("ContainerChecker", shared_from_this());
            factory.registerNodeType<JustNavigateChecker>("JustNavigateChecker",shared_from_this());
            factory.registerNodeType<UnLoad>("UnLoad",shared_from_this());
            //factory.registerNodeType<GetLongPathGoalPose>("GetLongPathGoalPose", shared_from_this());
            
           
            
            global_bb = BT::Blackboard::create();
           // "MainTree" will own maintree_bb
            auto maintree_bb = BT::Blackboard::create(global_bb);

            // get some initial parameters
            double raduis = get_parameter("circle_radius").as_double();
            auto  base_initial_pose = get_parameter("base_initial_pose").as_double_array();
            auto  base_long_path_pose = get_parameter("base_long_path_pose").as_double_array();
            auto  unload_poses = get_parameter("unload_poses").as_double_array();

            if((unload_poses.size()%4 != 0)){
                RCLCPP_ERROR(this->get_logger(),"Couldn't create tree with the parameter :(unload_poses), default values kept");
            }
            if((base_initial_pose.size()%4 != 0)){
                RCLCPP_ERROR(this->get_logger(),"Couldn't create tree with the parameter :(base_initial_pose), default values kept");
            }
            if((base_long_path_pose.size()%4 != 0)){
                RCLCPP_ERROR(this->get_logger(),"Couldn't create tree with the parameter :(base_long_path_pose), default values kept");
            }

            
            tree_ = factory.createTreeFromFile(tree_xml_file_, maintree_bb);

            TargetPose initial = TargetPose(base_initial_pose.at(0),base_initial_pose.at(1),
                                            base_initial_pose.at(2),base_initial_pose.at(3)) ;
            TargetPose long_path = TargetPose(base_long_path_pose.at(0),base_long_path_pose.at(1),
                                              base_long_path_pose.at(2),base_long_path_pose.at(3));

            TargetPose base_unload_poses = TargetPose(unload_poses.at(0),unload_poses.at(1),
                                               unload_poses.at(2),unload_poses.at(3));
            TargetPose base_target = TargetPose(MAXFLOAT,MAXFLOAT,
                                                MAXFLOAT ,MAXFLOAT);
            Pose3D object = Pose3D();
            Pose3D object1 = Pose3D();
            Pose3D object2 = Pose3D();
            Pose3D object3 = Pose3D();

            object.set__x(6.000000);
            object.set__y(-7.000000);
            object.set__z(0.050000); 

            object1.set__x(8.000000);
            object1.set__y(2.000000);
            object1.set__z(0.100000);

            object2.set__x(-5.000000);
            object2.set__y(-6.000000);
            object2.set__z(0.0700000);

            object3.set__x(8.0800000);
            object3.set__y(-6.000000);
            object3.set__z(0.0700000);

            global_bb->set("circle_radius",raduis);
            global_bb->set("theta_shift",0.0000000);
            global_bb->set("base_initial_pose",initial);
            global_bb->set("base_long_path_pose",long_path);
            global_bb->set("unload_poses",base_unload_poses);
            global_bb->set("base_target",base_target);
            global_bb->set("is_go_to_initials",false);
            global_bb->set("is_container_full",false);
            global_bb->set<int>("product_counter",0);
            global_bb->set("is_exec_gripper",false);
            global_bb->set("is_grasped",false);
            
            global_bb->set<std::vector<Pose3D>>("objects_poses_vect",{object,object1,object2,object3});
    
            publisher_ptr_ = std::make_unique<BT::Groot2Publisher>(tree_, 1668);
        }
        /*
        void update_behavior_tree() {
            // Tick the behavior tree.
            BT::NodeStatus tree_status = 
            ree_.tickWhileRunning();
            while (rclcpp::ok())
            {
                  tree_.tickOnce();
                  std::this_thread::sleep_for(std::chrono::milliseconds(10));
             }
            
            if (tree_status == BT::NodeStatus::RUNNING) {
                return;
            }
            // Cancel the timer if we hit a terminal state.
            if (tree_status == BT::NodeStatus::SUCCESS) {
                RCLCPP_INFO(this->get_logger(), "Finished with status SUCCESS");
                timer_->cancel();
            } else if (tree_status == BT::NodeStatus::FAILURE) {
                RCLCPP_INFO(this->get_logger(), "Finished with status FAILURE");
                timer_->cancel();
            }
                
        } */

        
        void battery_state_listener() {

            global_bb->set("battery_percentage",bat);
            bat = bat*exp(-0.0000003);
        }
    

        // Configuration parameters.
        std::string tree_xml_file_;
        std::shared_ptr<moveit_cpp::MoveItCpp> moveit_cpp_ptr;
        // ROS and BehaviorTree.CPP variables.
        // just to simulate the listeners for camera that detect object and return it pose
        rclcpp::TimerBase::SharedPtr ObjectsPoseListen;
        // camera pose
        rclcpp::TimerBase::SharedPtr GetLongPathGoalPose ;
        rclcpp::CallbackGroup::SharedPtr callback_group_;
        BT::Tree tree_;
        std::unique_ptr<BT::Groot2Publisher> publisher_ptr_;
        std::vector<TargetPose>  Objects_poses;
        BT::Blackboard::Ptr global_bb;
        std::thread spin_thread;
        
        double bat;
        bool first_;


};


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
     // parameters being sent down by the Python launch file
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto const node = std::make_shared<WsttaBtPipelineNode>(node_options);
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(node);
    
    auto spinthread = std::thread([&](){executor.spin();});
    spinthread.detach();
    node->tick_function();

      // stops executor.spin()

    if (spinthread.joinable())
    {
        spinthread.join();
    }
    executor.cancel(); 
    rclcpp::shutdown();
    return 0;
}
