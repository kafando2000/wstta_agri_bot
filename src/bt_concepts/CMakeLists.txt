cmake_minimum_required(VERSION 3.8)
project(bt_concepts)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(custom_interfaces REQUIRED)

add_executable(first_tree src/first_tree.cpp )
ament_target_dependencies(first_tree rclcpp std_msgs behaviortree_cpp)

add_executable(numb_checker src/numb_checker.cpp )
ament_target_dependencies(numb_checker rclcpp std_msgs behaviortree_cpp)

add_executable(bt_action src/bt_actions.cpp ) 
ament_target_dependencies(bt_action rclcpp rclcpp_action std_msgs geometry_msgs behaviortree_cpp custom_interfaces)


add_executable(reach_location_server src/reach_location_server.cpp)
ament_target_dependencies(reach_location_server rclcpp rclcpp_action std_msgs geometry_msgs behaviortree_cpp custom_interfaces)



install(TARGETS first_tree numb_checker bt_action reach_location_server
RUNTIME DESTINATION lib/${PROJECT_NAME})

install( 
  DIRECTORY  trees launch
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
