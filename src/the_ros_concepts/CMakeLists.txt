cmake_minimum_required(VERSION 3.8)
project(the_ros_concepts)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(custom_interfaces REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(OsqpEigen REQUIRED)
# If using the ROS-wrapped vendor package
find_package(osqp_vendor REQUIRED) 

# Add executable for publisher node
add_executable(publisher_node src/cpp_publisher.cpp)
ament_target_dependencies(publisher_node rclcpp std_msgs custom_interfaces)

# Add executable for subscriber node
add_executable(subscriber_node src/subscriber_node.cpp)
ament_target_dependencies(subscriber_node rclcpp std_msgs custom_interfaces)

# Add executable for service server node
add_executable(service_server src/service_server.cpp)
ament_target_dependencies(service_server rclcpp custom_interfaces)

# Add executable for service client node
add_executable(service_client src/service_client.cpp)
ament_target_dependencies(service_client rclcpp custom_interfaces)

# Add executable for action server node
add_executable(action_server src/action_server.cpp)
ament_target_dependencies(action_server rclcpp rclcpp_action custom_interfaces)

# Add executable for action client node
add_executable(action_client src/action_client.cpp)
ament_target_dependencies(action_client rclcpp rclcpp_action custom_interfaces)

# Add executable for action client node
add_executable(node_to_test_yaml src/node_to_test_yaml.cpp)
ament_target_dependencies(node_to_test_yaml rclcpp)

add_executable(osqp_node src/osqp_node.cpp)
ament_target_dependencies(osqp_node rclcpp Eigen3)
target_link_libraries(osqp_node OsqpEigen::OsqpEigen)

install(TARGETS osqp_node DESTINATION lib/${PROJECT_NAME})


# intsalling exectuables
install(TARGETS
publisher_node
subscriber_node
service_server
service_client
action_server
action_client
node_to_test_yaml
osqp_node
DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY launch params
DESTINATION share/${PROJECT_NAME}/
)





if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
