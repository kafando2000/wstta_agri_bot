from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition, UnlessCondition
import xacro
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    param = get_package_share_directory("the_ros_concepts")
    file = os.path.join(param,'params','my_node_params.yaml')
    node_to_test_yaml = Node(
        package="the_ros_concepts",
        executable="node_to_test_yaml",
        name="yaml_test",
        parameters=[file],
        output="screen"
    )
    ld = LaunchDescription()
    ld.add_action(node_to_test_yaml)
    return ld