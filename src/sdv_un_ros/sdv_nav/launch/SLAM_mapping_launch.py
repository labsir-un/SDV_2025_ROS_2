import launch
import launch_ros.actions
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # Declare parameters
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='False',
        description='Use simulation time'
    )

    map_file_arg = DeclareLaunchArgument(
        'map_file',
        default_value='~/ros2_ws/src/sdv-UN-ROS/sdv_nav/maps/LabFabEx.yaml',
        description='Path to the LabfabEx map'
    )

    # SLAM Toolbox Localization Node
    slam_toolbox_node = Node(
        package='slam_toolbox',
        executable='localization_slam_toolbox_node',
        name='slam_toolbox_localization',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'map_file_name': LaunchConfiguration('map_file'),
            'map_start_x': 0.5,
            'map_start_y': 0.8,
            'mode': 'localization',  # Ensures it's using an existing map
            'transform_publish_period': 0.05,
            'map_publish_period': 3.0,
            'scan_topic': 'scan',
            'base_frame': 'base_link',
            'odom_frame': 'odom',
            'map_frame': 'map',
            'use_scan_matching': True,
            'transform_timeout': 0.2,
            'publish_map_odom_transform': True,
            'publish_odometry': True,
        }]
    )

    return LaunchDescription([
        use_sim_time_arg,
        map_file_arg,
        slam_toolbox_node
    ])

