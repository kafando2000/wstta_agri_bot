#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/srv/concat_strings.hpp"

class StringConcatClient : public rclcpp::Node
{
public:
    StringConcatClient()
    : Node("string_concat_client")
    {
    
        RCLCPP_INFO(this->get_logger(), "Started ROS 2 Service Client");    
        // create service client with service type
        client_ = this->create_client<custom_interfaces::srv::ConcatStrings>("concat_strings");
    }

    // function to send the request
    void send_request(const std::string &str1, const std::string &str2)
    {
        auto request = std::make_shared<custom_interfaces::srv::ConcatStrings::Request>();
        request->var1 = str1;
        request->var2 = str2;

        // handle the synchronization
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
        }
        // sending the quest
        auto future_result = client_->async_send_request(request);
        
        // handle the response status
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future_result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            RCLCPP_INFO(this->get_logger(), "Result: concatenated_str='%s'", future_result.get()->concat_string.c_str());
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to call service");
        }
    }

private:
    rclcpp::Client<custom_interfaces::srv::ConcatStrings>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto client = std::make_shared<StringConcatClient>();
    client->send_request("Hello, ", "World!"); // Example request
    rclcpp::shutdown();
    return 0;
}

