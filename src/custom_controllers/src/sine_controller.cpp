#include "rclcpp/rclcpp.hpp"
#include "controller_interface/controller_interface.hpp"
#include "controller_interface/helpers.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#define J_SIZE 2



namespace sine_law_controller{
    class SineLawController : public controller_interface::ControllerInterface {
        
        public:
            SineLawController() : controller_interface::ControllerInterface(), dt_
            (0, 0) {}

            // Callback for updating sine parameters received via ROS topic
            void sine_param_cb(const std_msgs::msg::Float32MultiArray::SharedPtr msg) {
                if( msg->data.size() != 4 ) {
                RCLCPP_ERROR(this->get_node()->get_logger(), "Wrong number of sine parameters");
                return;
                }
                amplitude_[0] = msg->data[0];
                amplitude_[1] = msg->data[2];
                frequency_[0] = msg->data[1];
                frequency_[1] = msg->data[3];
            }

            // configure the state_interface
            controller_interface::InterfaceConfiguration state_interface_configuration() const {
                std::vector<std::string> state_interfaces_config_names;
                state_interfaces_config_names.push_back("arm_joint1/position");
                state_interfaces_config_names.push_back("arm_joint1/velocity");
                state_interfaces_config_names.push_back("arm_joint2/position");
                state_interfaces_config_names.push_back("arm_joint2/velocity");
                return {controller_interface::interface_configuration_type::INDIVIDUAL,state_interfaces_config_names};
            }
            // configure the command_interface
            controller_interface::InterfaceConfiguration command_interface_configuration() const {
                std::vector<std::string> command_interfaces_config_names;
                command_interfaces_config_names.push_back("arm_joint1/position");
                command_interfaces_config_names.push_back("arm_joint2/position");
                return {controller_interface::interface_configuration_type::INDIVIDUAL,command_interfaces_config_names};
            }

            // Lifecycle callback to configure controller parameters and resources
            controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & /*previous_state*/){
                // subscribe to topic to have sin params
                sine_param_sub_ = get_node()->create_subscription<std_msgs::msg::Float32MultiArray>("/sine_param", 10,
                    std::bind(&SineLawController::sine_param_cb,
                    this, std::placeholders::_1)
                );
                // Set time increment between updates based on update rate
                dt_ = rclcpp::Duration(std::chrono::duration<double, std::milli>(1e3/get_update_rate()));

                amplitude_[0] = amplitude_[1] = frequency_[0] = frequency_[1] = 0.0;

                // Reserve space in vectors for efficiency and initialize state interface references
                command_interfaces_.reserve(J_SIZE);
                state_interfaces_.reserve(2 * J_SIZE);

                joint_state_interfaces_.resize(J_SIZE);
                state_interface_names_.resize(J_SIZE);
                
                 // Assign interface names for each joint's position and velocity
                std::vector<std::string> joint_name = {"arm_joint1", "arm_joint2"};
                for (int i = 0; i < J_SIZE; i++) {
                    state_interface_names_[i] = {joint_name[i] + "/position", joint_name[i] + "/velocity"};
                }
                RCLCPP_INFO(get_node()->get_logger(), "Configuration successful");
                return controller_interface::CallbackReturn::SUCCESS;
            }
            // Callback for initialization state
            controller_interface::CallbackReturn on_init() {
                return controller_interface::CallbackReturn::SUCCESS;
            }
            // Lifecycle callback to activate the controller, initializing initial joint positions
            controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State &){
                // Initialize references to the ordered state interfaces and get initial positions
                for (int i = 0; i < 2; i++)
                    controller_interface::get_ordered_interfaces(state_interfaces_, state_interface_names_[i], "", joint_state_interfaces_[i]);

                initial_joint_position_[0] = joint_state_interfaces_[0][0].get().get_optional().value_or(0.0);
                initial_joint_position_[1] = joint_state_interfaces_[1][0].get().get_optional().value_or(0.0);
                RCLCPP_INFO(get_node()->get_logger(), "Activation successful");
                t_ = 0.0;

                return controller_interface::CallbackReturn::SUCCESS;
            }

            // Callback for deactivation state
            controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State & /*previous_state*/) {
                return controller_interface::CallbackReturn::SUCCESS;
            }

            // Main update loop, computes sine wave for joint positions and applies them to command interfaces
            controller_interface::return_type update(const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/) {
                t_ += dt_.seconds(); // Increment time for sine calculations
                for (int i = 0; i < 2; i++) {
                    // Calculate desired joint position as a sine wave based on initial position, amplitude, and frequency
                    desired_joint_position_[i] = initial_joint_position_[i] + (amplitude_[i] * std::sin(2 * M_PI * frequency_[i] * t_));
                    // Apply position command and check if it is okay
                    if (!command_interfaces_[i].set_value(desired_joint_position_[i])) {
                       RCLCPP_ERROR_THROTTLE(get_node()->get_logger(), *get_node()->get_clock(), 1000,"Failed to set value for joint %d", i);
                    } 
                }
                return controller_interface::return_type::OK;
            }
  

        private: 
            // Duration between updates, calculated from update rate
            rclcpp::Duration dt_;
            // Template alias for managing references to state interfaces
            template<typename T>
            using InterfaceReferences = std::vector<std::vector<std::reference_wrapper<T>>>;
            InterfaceReferences<hardware_interface::LoanedStateInterface> joint_state_interfaces_;

            // 2D vector to contain the state_interface names : joint1/velocity, joint2/position ...
            std::vector<std::vector<std::string>> state_interface_names_;
            // variables to handle the control law
            double initial_joint_position_[J_SIZE];
            double desired_joint_position_[J_SIZE];
            double amplitude_[J_SIZE];
            double frequency_[J_SIZE];
            double t_;
            // subscriber to get the sine params : Float32MultiArray gives four params: amplitudes and freqencies of the two joints
            rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr sine_param_sub_;

    };
}

#include "pluginlib/class_list_macros.hpp" // Plugin library for dynamically loading the controller
PLUGINLIB_EXPORT_CLASS(sine_law_controller::SineLawController, controller_interface::ControllerInterface) // Export for use as plugin




