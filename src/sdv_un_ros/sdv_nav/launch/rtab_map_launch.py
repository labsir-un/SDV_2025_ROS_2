import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    # Declare arguments
    odom_topic = LaunchConfiguration("odom_topic")
    scan_topic = LaunchConfiguration("scan_topic")
    rviz_enabled = LaunchConfiguration("rviz")
    rtabmapviz_enabled = LaunchConfiguration("rtabmapviz")
    mapping = LaunchConfiguration("mapping")
    rtabmap_args = LaunchConfiguration("rtabmap_args")

    return LaunchDescription([
        DeclareLaunchArgument("odom_topic", default_value="/scanmatch_odom"),
        DeclareLaunchArgument("scan_topic", default_value="/scan"),
        DeclareLaunchArgument("rviz", default_value="false"),
        DeclareLaunchArgument("rtabmapviz", default_value="false"),
        DeclareLaunchArgument("mapping", default_value="false"),
        DeclareLaunchArgument("rtabmap_args", default_value="--delete_db_on_start", condition=IfCondition(mapping)),

        # ICP Odometry (if not using external odometry)
        Node(
            package="rtabmap_ros",
            executable="icp_odometry",
            name="icp_odometry",
            output="screen",
            parameters=[{
                "frame_id": "base_link",
                "Icp/PointToPlane": True,
                "Icp/VoxelSize": 0.05,
                "Icp/Epsilon": 0.001,
                "Icp/PointToPlaneK": 5,
                "Icp/PointToPlaneRadius": 0.3,
                "Icp/MaxCorrespondenceDistance": 0.1,
                "Icp/PM": True,
                "Icp/PMOutlierRatio": 0.95,
                "Odom/Strategy": 0,
                "Odom/GuessMotion": True,
                "Odom/ResetCountdown": 0,
                "Odom/ScanKeyFrameThr": 0.9,
            }],
            remappings=[
                ("/scan", scan_topic),
                ("/odom", odom_topic),
                ("/odom_info", "/rtabmap/odom_info")
            ]
        ),

        # RTAB-Map
        Node(
            package="rtabmap_ros",
            executable="rtabmap",
            name="rtabmap",
            output="screen",
            parameters=[{
                "frame_id": "base_link",
                "subscribe_depth": False,
                "subscribe_rgbd": True,
                "subscribe_scan": True,
                "Mem/IncrementalMemory": mapping,
                "Mem/InitWMWithAllNodes": IfCondition(mapping, False, True),
                "Reg/Strategy": 1,  # 0=Visual, 1=ICP, 2=Visual+ICP
                "Reg/Force3DoF": True,
                "RGBD/ProximityBySpace": False,
            }],
            remappings=[
                ("/scan", scan_topic),
                ("/odom", odom_topic),
            ]
        ),

        # RTAB-Map Visualization (if enabled)
        GroupAction([
            IfCondition(rtabmapviz_enabled),
            Node(
                package="rtabmap_ros",
                executable="rtabmapviz",
                name="rtabmapviz",
                output="screen",
                parameters=[{
                    "subscribe_rgbd": True,
                    "subscribe_laserScan": True,
                    "frame_id": "base_link",
                }],
                remappings=[
                    ("/scan", scan_topic),
                    ("/odom", odom_topic)
                ]
            ),
        ]),

        # RViz (if enabled)
        GroupAction([
            IfCondition(rviz_enabled),
            Node(
                package="rviz2",
                executable="rviz2",
                name="rviz",
                arguments=["-d", [FindPackageShare("rtabmap_demos"), "/launch/robot_mapping_demo.launch.py"]],
                output="screen"
            ),
        ]),

        # Point Cloud Processing
        Node(
            package="rtabmap_ros",
            executable="point_cloud_xyzrgb",
            name="points_xyzrgb",
            output="screen",
            parameters=[{"voxel_size": 0.01}],
            remappings=[
                ("/rgbd_image", "/rtabmap/rgbd_image"),
                ("/cloud", "voxel_cloud")
            ]
        )
    ])

