
#ifndef MM_MOVEIT_BT_NODES_HPP
#define MM_MOVEIT_BT_NODES_HPP


#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/behavior_tree.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include <geometry_msgs/msg/point.hpp>
#include <moveit/move_group_interface/move_group_interface.hpp>
#include <moveit/planning_scene_interface/planning_scene_interface.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <moveit_msgs/action/move_group.hpp>
#include "tf2/exceptions.h"
#include <tf2/LinearMath/Quaternion.hpp>
#include <tf2/LinearMath/Matrix3x3.h>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "tf2_eigen/tf2_eigen.hpp"
#include <moveit/robot_state/conversions.hpp>
#include "geometry_msgs/msg/point_stamped.hpp"
#include "mm_behaviors/utils.hpp"
#include <espeak/speak_lib.h>
#include "moveit/robot_model_loader/robot_model_loader.hpp"
#include <moveit/robot_trajectory/robot_trajectory.hpp>
#include <moveit/trajectory_processing/time_optimal_trajectory_generation.hpp>
#include "moveit/robot_model/robot_model.hpp"
#include "moveit/robot_state/robot_state.hpp"
#include <moveit/kinematic_constraints/utils.hpp>
#include <moveit_msgs/msg/constraints.hpp>
// MoveitCpp
#include "moveit/moveit_cpp/moveit_cpp.hpp"
#include "moveit/moveit_cpp/planning_component.hpp"

#include "geometry_msgs/msg/point_stamped.hpp"
//#include "visualization/moveit_visual_tools.h"
namespace WSTTA{
class PlanForTheArm : public BT::StatefulActionNode{
  // constructor
public:
    PlanForTheArm(const std::string& name, const BT::NodeConfig& config, const rclcpp::Node::SharedPtr& node_ptr,
            const std::shared_ptr<moveit_cpp::MoveItCpp>& moveit_cpp_ptr);
            


    // on start  virtual method
    BT::NodeStatus onStart() override;
    BT::NodeStatus onRunning() override;
    void onHalted() override;
    bool get_plan_object_info();

    static BT::PortsList providedPorts(){
                return{
                    BT::InputPort<std::string>("plan_key"),
                    BT::InputPort<std::vector<Pose3D>>("objects_poses_vect"),
                    BT::InputPort<double>("circle_radius"),
                    BT::BidirectionalPort<double>("theta_shift"),
                    BT::InputPort<bool>("is_container_full"),
                    BT::BidirectionalPort<PlanObjectInfo>("plan_object_info"),
                    BT::OutputPort<std::shared_ptr<robot_trajectory::RobotTrajectory>>("arm_joints_traject"),};
    }

public:
    const std::string PLANNING_ARM_GROUP_NAME = "arm";
private:
   
   
    rclcpp::Node::SharedPtr node_ptr_;
    // tf buffer and listener to get robot pose
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

    // shared ressources 
    std::shared_ptr<moveit::core::RobotState> state_;
    moveit::core::RobotModelConstPtr robot_model_;
    std::shared_ptr<moveit_cpp::MoveItCpp> moveit_cpp_ptr;
    std::shared_ptr<moveit_cpp::PlanningComponent> arm_planning_component;
   
    planning_interface::MotionPlanResponse plan_solution;
    moveit::core::MoveItErrorCode status_;
    
    // plan key here is one defined state name : it will be among the <<group_predefined_states>>  otherwise 
    // it's to track an object with the plan_key = "for_object"
    std::string plan_key_;
    // need to be obtain by parameter or through blackboard key
    std::vector<std::string> arm_predefined_states;
    std::vector<Pose3D> Objects_poses;
    PlanObjectInfo plan_object_info_;
    
    // can be obtained from robot model
    std::string planning_frame ;
    std::string navigation_frame;
    bool found_key;
};



class ExecuteArmPlan : public BT::StatefulActionNode{
    public:

        ExecuteArmPlan(const std::string& name, const BT::NodeConfig& config, const rclcpp::Node::SharedPtr& node_ptr,
            const std::shared_ptr<moveit_cpp::MoveItCpp>& moveit_cpp_ptr);
        



        static void read_text_in_speak(std::string t);


        BT::NodeStatus onStart() override;
        BT::NodeStatus onRunning() override;
        void onHalted() override;

        static BT::PortsList providedPorts(){
            return{
                BT::InputPort<robot_trajectory::RobotTrajectoryPtr>("arm_joints_traject"),
                BT::BidirectionalPort<bool>("is_container_full"),
                BT::InputPort<std::string>("exec_key"),
                BT::BidirectionalPort<bool>("is_exec_gripper"),

            };
        }
    public:
        const std::string PLANNING_ARM_GROUP_NAME = "arm";
    private:
        rclcpp::Node::SharedPtr node_ptr_;
        // the moveit plan
       robot_trajectory::RobotTrajectoryPtr my_plan;
        std::shared_ptr<moveit_cpp::MoveItCpp> moveit_cpp_ptr;
        std::shared_ptr<moveit_cpp::PlanningComponent> arm_planning_component;
        const std::vector<std::string> CONTROLLERS = {"arm_controller"};
        std::string exec_key;
        moveit_controller_manager::ExecutionStatus status;
        std::future<moveit_controller_manager::ExecutionStatus> execution_future_;
        trajectory_execution_manager::TrajectoryExecutionManagerPtr manager;
        int products_counter;
        


};



class PlanExecForGripper : public BT::StatefulActionNode{
    public:

        PlanExecForGripper(const std::string& name, const BT::NodeConfig& config, const rclcpp::Node::SharedPtr& node_ptr,
            const std::shared_ptr<moveit_cpp::MoveItCpp>& moveit_cpp_ptr);
        



        static void read_text_in_speak(std::string t);


        BT::NodeStatus onStart() override;
        BT::NodeStatus onRunning() override;
        void onHalted() override;

        static BT::PortsList providedPorts(){
            return{
                BT::InputPort<robot_trajectory::RobotTrajectoryPtr>("arm_joints_traject"),
                BT::BidirectionalPort<bool>("is_grasped"),
                BT::InputPort<std::string>("plan_key"),
                BT::BidirectionalPort<bool>("is_exec_gripper"),

            };
        }
    public:
        const std::string PLANNING_EE_GROUP_NAME = "ee_group";
    private:
        rclcpp::Node::SharedPtr node_ptr_;
        // the moveit plan
       planning_interface::MotionPlanResponse my_plan;
        std::shared_ptr<moveit_cpp::MoveItCpp> moveit_cpp_ptr;
        std::shared_ptr<moveit_cpp::PlanningComponent> ee_planning_component;
        const std::vector<std::string> CONTROLLERS = {"mm_gripper_controller"};
        std::string plan_key_;
        moveit_controller_manager::ExecutionStatus status;
        std::future<moveit_controller_manager::ExecutionStatus> execution_future_;
        trajectory_execution_manager::TrajectoryExecutionManagerPtr manager;
        std::vector<std::string> ee_predefined_states;
        


};




} // end of namespace WSTTA

#endif



