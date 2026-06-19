#include "rclcpp/rclcpp.hpp"
#include "controller_interface/controller_interface.hpp"
#include "controller_interface/helpers.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"

// optimization based controller for whole body control in cartesian space
namespace whole_body_controller_for_mm {
class WholeBodyControllerForMm : public controller_interface::ControllerInterface {

public:
  CallbackReturn on_init() override;

  CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

  CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state) override;

  CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state) override;

  controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;
  
  // Define required interfaces

  controller_interface::InterfaceConfiguration command_interface_configuration() const override;

  controller_interface::InterfaceConfiguration state_interface_configuration() const override;


private: 
        // Duration between updates, calculated from update rate
        rclcpp::Duration dt_;
        static inline unsigned int joint_number_ = 0;
        // Template alias for managing references to state interfaces
        template<typename T>
        using InterfaceReferences = std::vector<std::vector<std::reference_wrapper<T>>>;
        InterfaceReferences<hardware_interface::LoanedStateInterface> joint_state_interfaces_;

        // 2D vector to contain the state_interface names : joint1/velocity, joint2/position ...
        std::vector<std::vector<std::string>> state_interface_names_;
        // variables to handle the control law
        double initial_joint_position_[joint_number_];
        double desired_joint_position_[joint_number_];
        double amplitude_[joint_number_];
        double frequency_[joint_number_];
        double t_;
        // subscriber to get the sine params : Float32MultiArray gives four params: amplitudes and freqencies of the two joints
        rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr params_;
};
}
