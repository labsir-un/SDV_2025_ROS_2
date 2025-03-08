from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        # Declare arguments
        DeclareLaunchArgument('scan_topic', default_value='scan', description='Topic for laser scans'),
        DeclareLaunchArgument('frame_prefix', default_value='', description='Frame prefix'),

        # AMCL Node
        Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            output='screen',
            parameters=[{
                'use_map_topic': True,
                'odom_model_type': 'diff',
                'odom_alpha5': 0.1,
                'gui_publish_rate': 10.0,
                'laser_max_beams': 720,
                'laser_min_range': 0.1,
                'laser_max_range': 30.0,
                'min_particles': 10,
                'max_particles': 500,
                'kld_err': 0.05,
                'kld_z': 0.99,
                'odom_alpha1': 0.2,
                'odom_alpha2': 0.2,
                'odom_alpha3': 0.2,
                'odom_alpha4': 0.2,
                'laser_z_hit': 0.5,
                'laser_z_short': 0.05,
                'laser_z_max': 0.05,
                'laser_z_rand': 0.5,
                'laser_sigma_hit': 0.2,
                'laser_lambda_short': 0.1,
                'laser_model_type': 'likelihood_field',
                'laser_likelihood_max_dist': 2.0,
                'update_min_d': 0.1,
                'update_min_a': 0.314,
                'odom_frame_id': [LaunchConfiguration('frame_prefix'), 'odom'],
                'base_frame_id': [LaunchConfiguration('frame_prefix'), 'base_link'],
                'global_frame_id': 'map',
                'resample_interval': 1,
                'transform_tolerance': 1.0,
                'recovery_alpha_slow': 0.0,
                'recovery_alpha_fast': 0.1,
                'initial_pose_x': 0.0,
                'initial_pose_y': 0.0,
                'initial_pose_a': 0.0,
                'receive_map_topic': True,
                'first_map_only': True,
            }],
            remappings=[
                ('scan', LaunchConfiguration('scan_topic'))
            ]
        )
    ])

