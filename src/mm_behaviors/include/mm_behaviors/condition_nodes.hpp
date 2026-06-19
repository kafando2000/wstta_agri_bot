#include<chrono>
#include <cstdlib>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "behaviortree_cpp/behavior_tree.h"
#include "yaml-cpp/yaml.h"
#include "sensor_msgs/sensor_msgs/msg/battery_state.hpp"
#include "mm_behaviors/utils.hpp"

using namespace std::chrono_literals;
using  Batterystate = sensor_msgs::msg::BatteryState;
// class to check battery state
class BatteryChecker:public BT::ConditionNode{
    public:
    BatteryChecker(std::string name,const BT::NodeConfig& config,const rclcpp::Node::SharedPtr& node);
    // callback to recieve batterystate
    void recieve_battery_state(const Batterystate);

    // check if battery state is acceptable to complete tasks
    bool battery_is_ok();

    BT::NodeStatus tick() override;
    
    static BT::PortsList providedPorts() {
        return {BT::InputPort<double>("percentage_treshold"),
        BT::InputPort<double>("battery_percentage")};
    }

    void play_sound()
    { 
        system("aplay /home/user/ros2_ws/src/my_pkg/sounds/alert.wav");
    }

    private:
    // subscriber to battery state
    rclcpp::Subscription<double>::SharedPtr batterystatesubscriber_;
    rclcpp::Node::SharedPtr node;
    double percentage_treshold;
    double batterypercentage;

};

class ContainerChecker:public BT::ConditionNode{
    public:
    ContainerChecker(std::string name,const BT::NodeConfig& config,const rclcpp::Node::SharedPtr& node);

    BT::NodeStatus tick() override;
    
    static BT::PortsList providedPorts() {
        return {BT::InputPort<bool>("is_container_full")};
    }

    void play_sound()
    { 
        system("espeak the container is full !");
    }

    private:
    // subscriber to battery state
    rclcpp::Subscription<double>::SharedPtr batterystatesubscriber_;
    rclcpp::Node::SharedPtr node;
    bool is_container_full;


};


// ckeck if robot should got to initial pose
class CheckGoToInitials:public BT::ConditionNode{
    public:
    CheckGoToInitials(std::string name,const BT::NodeConfig& config,const rclcpp::Node::SharedPtr& node);

    BT::NodeStatus tick() override;
    
    static BT::PortsList providedPorts() {
        return { BT::InputPort<bool>("is_go_to_initials")};
    }
    private:
        bool is_go_to_initials;
        rclcpp::Node::SharedPtr node;
};

class JustNavigateChecker:public BT::ConditionNode{
    public:
    JustNavigateChecker(std::string name,const BT::NodeConfig& config,const rclcpp::Node::SharedPtr& node);
    BT::NodeStatus tick() override;
    bool is_just_navigate();
    
    static BT::PortsList providedPorts() {
        return { BT::InputPort<std::vector<Pose3D>>("objects_poses_vect"),
            BT::InputPort<bool>("is_container_full")};
    }
    private:
        rclcpp::Node::SharedPtr node;
};

