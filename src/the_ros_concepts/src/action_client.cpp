#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "custom_interfaces/action/custom_action.hpp"

class ActionClient : public rclcpp::Node {
public:
  using MyCustomAction = custom_interfaces::action::CustomAction;
  using GoalHandle = rclcpp_action::ClientGoalHandle<MyCustomAction>;

  ActionClient() : Node("action_client") {
  
    RCLCPP_INFO(this->get_logger(), "Started Action Client Node"); 
    // create the action client 
    client_ = rclcpp_action::create_client<MyCustomAction>(this, "my_custom_action");

    // test a goal sending
    send_goal();
  }

  // send a goal
  void send_goal() {
    if (!client_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available");
      return;
    }

    auto goal_msg = MyCustomAction::Goal();
    goal_msg.goal_value = 10;

    auto send_goal_options = rclcpp_action::Client<MyCustomAction>::SendGoalOptions();

    send_goal_options.feedback_callback = [this](GoalHandle::SharedPtr, const std::shared_ptr<const MyCustomAction::Feedback> feedback) {
      RCLCPP_INFO(this->get_logger(), "Feedback: %.2d", feedback->progress);
    };
    send_goal_options.result_callback = [this](const GoalHandle::WrappedResult &result) {
      RCLCPP_INFO(this->get_logger(), "Result: %d", result.result->result_value);
    };

    // threaded function for goal sending, with goal options
    client_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<MyCustomAction>::SharedPtr client_;
};


int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ActionClient>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

