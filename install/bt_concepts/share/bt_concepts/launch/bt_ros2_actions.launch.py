from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    tree_path = PathJoinSubstitution ( [get_package_share_directory('bt_concepts'), 'trees', 'reach_location_x_y.xml' ])

    ld = LaunchDescription()
    
    bt_node = Node(
            package='bt_concepts',
            executable='bt_action',
            name='bt_with_ros2_actions',
            output='screen',
            parameters=[{'tree_xml_file': tree_path}],
        )
    
    ld.add_action( bt_node )

    return ld
