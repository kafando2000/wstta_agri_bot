#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/srv/concat_strings.hpp"

class StringConcatService : public rclcpp::Node
{
public:
    StringConcatService() : Node("string_concat_service")
    {

        RCLCPP_INFO(this->get_logger(), "Started ROS 2 Service Server");

        // create the service server with service type name and binding callbacks
        service_ = this->create_service<custom_interfaces::srv::ConcatStrings>(
            "concat_strings",
            std::bind(&StringConcatService::handle_service, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    void handle_service(const std::shared_ptr<custom_interfaces::srv::ConcatStrings::Request> request,
        std::shared_ptr<custom_interfaces::srv::ConcatStrings::Response> response)
    {
        response->concat_string = request->var1 + request->var2;
        RCLCPP_INFO(this->get_logger(), "Received: str1='%s', str2='%s'; Responding with: '%s'", 
                    request->var1.c_str(), request->var2.c_str(), response->concat_string.c_str());
    }

    rclcpp::Service<custom_interfaces::srv::ConcatStrings>::SharedPtr service_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StringConcatService>());
    rclcpp::shutdown();
    return 0;
}

