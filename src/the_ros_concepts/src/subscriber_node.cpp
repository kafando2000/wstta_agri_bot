#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "custom_interfaces/msg/custom_message.hpp"

class SubscriberNode : public rclcpp::Node {
public:
    SubscriberNode() : Node("subscriber_node") {
        // QoS profiles for subscribers
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10))    // History QoS (Keep last 10 messages)
                               .reliable()                      // Reliability QoS (reliable communication)
                               .transient_local();              // Durability QoS (message remains available to late subscribers)

        // Subscriber for std_msgs::msg::String with QoS settings
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "std_string_topic", qos_profile, 
            std::bind(&SubscriberNode::string_callback, this, std::placeholders::_1)
        );

        // Subscriber for custom message master_ros2_interface::msg::CustomMsg with QoS settings
        custom_subscription_ = this->create_subscription<custom_interfaces::msg::CustomMessage>(
            "custom_topic", qos_profile, 
            std::bind(&SubscriberNode::custom_msg_callback, this, std::placeholders::_1)
        );
    }

private:
    // Callback for std_msgs::msg::String
    void string_callback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());
    }

    // Callback for custom message master_ros2_interface::msg::CustomMsg
    void custom_msg_callback(const custom_interfaces::msg::CustomMessage::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received custom message: data='%s', number=%d", msg->mystring.c_str(), msg->myint);
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Subscription<custom_interfaces::msg::CustomMessage>::SharedPtr custom_subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubscriberNode>());
    rclcpp::shutdown();
    return 0;
}

