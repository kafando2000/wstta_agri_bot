#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/behavior_tree.h"
using namespace std::chrono_literals;
// class for the bt node
// the class can take any name different from the xml nodes names
// StatefulActionNode will return SUCCESS, RUNNING, or FAILURE
class HelloNode : public BT::StatefulActionNode {
    public:
        // constructor
        HelloNode(const std::string & action_name,
             const BT::NodeConfig &conf) : BT::StatefulActionNode(action_name, conf) {}


        // function to execute when the node is ticked
        BT::NodeStatus onStart() {
            getInput<std::string>("msg", hello_msg_);
            return BT::NodeStatus::RUNNING;
        }
        // function to run when the node is running
        BT::NodeStatus onRunning() {
            std::cout << hello_msg_ << std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        // function to exectue when the node is halted
        void onHalted() { return; }

        static BT::PortsList providedPorts() {
           return { BT::InputPort<std::string>("msg")};

        }
    private:    
        std::string hello_msg_;
};

// defining the tree executor

class BTExecutor : public rclcpp::Node {
    public:
        BTExecutor() : Node("bt_executor") {
            init_btree();
            timer_ = this->create_wall_timer( 0.5s,std::bind(&BTExecutor::tick_function, this));
        }
    private:
        // function to init the bt
        void init_btree() {
            factory_.registerNodeType<HelloNode>("HelloNode1");
            factory_.registerNodeType<HelloNode>("HelloNode2");
            this->declare_parameter<std::string>("tree_xml_file", "");
            std::string tree_file;
            this->get_parameter("tree_xml_file", tree_file);
            tree_ = factory_.createTreeFromFile(tree_file);

        }
        // function to tick node
        void tick_function() {
            tree_.tickOnce();
        }
    

    private:
        rclcpp::TimerBase::SharedPtr timer_;
        BT::Tree tree_;
        BT::BehaviorTreeFactory factory_;

};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<BTExecutor>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}