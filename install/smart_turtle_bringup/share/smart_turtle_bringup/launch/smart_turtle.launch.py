"""
============================================================================
    ROS2 Launch File
    Author: Mahmoud Abouzeid
    Description:
        This launch file starts the complete Smart Turtle system, including:
            1. turtlesim_node        → simulation environment
            2. turtle_controller     → motion control logic
            3. command_publisher     → sends movement commands (with params)
            4. reset_node            → resets turtlesim periodically

        It also loads configuration parameters from a YAML file.
============================================================================
"""
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    ld = LaunchDescription()

    # Path to parameters file
    param_config = PathJoinSubstitution([
        FindPackageShare('smart_turtle_bringup'),
        'config',
        'turtle_param.yaml'
    ])

    # ------------------- TURTLESIM NODE -------------------
    # Main simulation window node
    turtlesim_node = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )

    # ------------------- CONTROLLER NODE -------------------
    # Handles turtle movement logic (circle, square, spiral)
    controller = Node(
        package='smart_turtle_pkg',
        executable='turtle_controller',
        name='turtle_controller'
    )

    # ------------------- COMMAND PUBLISHER -------------------
    # Publishes movement commands using external YAML parameters
    command_publisher = Node(
        package='smart_turtle_pkg',
        executable='command_publisher',
        name='command_publisher',
        parameters=[param_config]
    )

    # ------------------- RESET NODE -------------------
    # Periodically resets the turtlesim environment
    reset_node = Node(
        package='smart_turtle_pkg',
        executable='reset_node',
        name='reset_node'
    )

    # ------------------- ADD ALL NODES TO LAUNCH -------------------
    ld.add_action(turtlesim_node)
    ld.add_action(controller)
    ld.add_action(command_publisher)
    ld.add_action(reset_node)

    return ld