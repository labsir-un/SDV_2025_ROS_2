from launch import LaunchDescription
from launch_ros.actions import Node, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    realsense_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('realsense2_camera'), 'launch', 'rs_launch.py')
        )
    )

    pointcloud_to_depthimage = Node(
        package='rtabmap_ros',
        executable='pointcloud_to_depthimage',
        name='pointcloud_to_depthimage',
        output='screen',
        parameters=[
            {'fill_holes_size': 2},
            {'approx': False}
        ],
        remappings=[
            ('cloud', '/camera/depth/points'),
            ('camera_info', '/camera/rgb/camera_info'),
            ('image_raw', '/camera/depth/points/image_raw'),
            ('image', '/camera/depth/points/image')
        ]
    )

    return LaunchDescription([
        realsense_launch,
        pointcloud_to_depthimage
    ])

