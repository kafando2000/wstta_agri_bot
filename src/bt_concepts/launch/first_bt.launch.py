from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    tree_path = PathJoinSubstitution([get_package_share_directory('bt_concepts'), 'trees', 'first_tree.xml' ])

    ld = LaunchDescription()
    
    bt_node = Node(
            package='bt_concepts',
            executable='first_tree',
            name='first_tree',
            output='screen',
            parameters=[{'tree_xml_file': tree_path}],
        )
    
    ld.add_action(bt_node)
    return ld