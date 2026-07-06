#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/blackboard.h"
#include "behaviortree_cpp/bt_factory.h"
#include "std_msgs/msg/float32.hpp"
#include <random>

using namespace std::chrono_literals;

// PublishResult action node class
class PublishResult : public BT::StatefulActionNode {
  public:
    PublishResult(const std::string & action_name, const BT::NodeConfig & conf) : BT::StatefulActionNode(action_name, conf) {    
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "QUI!."); 
        // create a blackboard key with type ros2 node shared pointer 
        node_ = conf.blackboard->get<rclcpp::Node::SharedPtr>("node");
    }
    
    // starting action
    BT::NodeStatus onStart() {
      std::string topic_name;
      getInput<std::string>("topic_name", topic_name );
      pub_ = node_->create_publisher<std_msgs::msg::Float32>(topic_name, 1);
      return BT::NodeStatus::RUNNING;
    }
    // running action
    BT::NodeStatus onRunning() {   
      double value;      
      getInput<double>("generated_number", value );
      std_msgs::msg::Float32 v;
      v.data = value;
      pub_->publish(v);
      return BT::NodeStatus::SUCCESS;
    }
    // stopping action
    void onHalted() { return; }

    // get bt node' ports (input or output ports)
    static BT::PortsList providedPorts() {
      return {
        BT::InputPort<std::string>("topic_name"),
        BT::InputPort<double>("generated_number")
      };
    }

    private:
      rclcpp::Node::SharedPtr node_;
      rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pub_;

};

// number checker action node class
class NumberChecker : public BT::StatefulActionNode {
  public:
    NumberChecker(const std::string & action_name, const BT::NodeConfig & conf) : BT::StatefulActionNode(action_name, conf){    

    }
    // action starting
    BT::NodeStatus onStart() {
        if(!getInput<double>("check_value", num_threshold_)) {
          throw BT::RuntimeError("missing required input [goal]");
        }

        return BT::NodeStatus::RUNNING;
    }
    // action running
    BT::NodeStatus onRunning() {   
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(1, 100); // For an integer between 1 and 100
        double random_number = distrib(gen);

        std::cout << "Generated number: " << random_number << " - Threshold: " << num_threshold_ << " - ";
        if( random_number < num_threshold_) {
          setOutput("generated_number", random_number);
          std::cout << "Success! " << std::endl;
          return BT::NodeStatus::SUCCESS;
        }
        else {
          std::cout << "Failure! " << std::endl;
          setOutput("generated_number", -1);
          return BT::NodeStatus::FAILURE;
        }
    }
    // stop action
    void onHalted() { return; }
    // get bt node' ports (input or output ports)
    static BT::PortsList providedPorts() {
      return {
        BT::InputPort<double>("check_value"),
        BT::OutputPort<double>("generated_number")
      };
    }

    private:
        double num_threshold_;
};

 
 // executor node for the behavior tree
class BTExecutor : public rclcpp::Node {
  public:
    BTExecutor()
    : Node("bt_executor"){
      first_ = true;
      timer_ = this->create_wall_timer( 0.1s, std::bind(&BTExecutor::tick_function, this));
      blackboard_ = BT::Blackboard::create();

    }

  private:

    // initialize the bt tree ( make linking betwween code and the xml tree)
    void init_btree() {
        blackboard_->set<rclcpp::Node::SharedPtr>("node", this->shared_from_this());
        factory_.registerNodeType<NumberChecker>("CheckNumber1");
        factory_.registerNodeType<NumberChecker>("CheckNumber2");
        factory_.registerNodeType<NumberChecker>("CheckNumber3");
        factory_.registerNodeType<PublishResult>("PublishResult");

        this->declare_parameter<std::string>("tree_xml_file", "");
        std::string tree_file;
        this->get_parameter("tree_xml_file", tree_file);
        tree_ = factory_.createTreeFromFile(tree_file, blackboard_);

    }

    void tick_function() {
      if( first_ ) {
          init_btree();
          first_ = false;
      } 

      tree_.tickOnce();

    }
    
    rclcpp::TimerBase::SharedPtr timer_;
    BT::Blackboard::Ptr blackboard_;
    BT::Tree tree_;
    BT::BehaviorTreeFactory factory_;
    bool first_;


};



 
int main(int argc, char * argv[]) {

  rclcpp::init(argc, argv);

  rclcpp::Node::SharedPtr BT_executor_node = std::make_shared<BTExecutor>();
  rclcpp::spin(BT_executor_node);
  rclcpp::shutdown();

  return 0;

}