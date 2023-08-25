# Interbotix_ViperX_300_ROS_Control

ROS environment for controlling Interbotix ViperX 300 robot arms. This repository provides an enhanced ROS setup and control solution for multiple ViperX 300 arms through the use of prefixes and namespaces.

## Problem Statement

The current ROS control implementation for ViperX 300 robot arms has a limitation where it only allows the control of a single robot arm within MoveIt. This repository aims to address this limitation by leveraging key packages from various Interbotix repositories and modifying them to enable seamless control of multiple ViperX 300 arms.

## Key Modifications

The following significant changes have been made to enable multi-arm control:

1. **VX300s SDK Enhancement:**
   - Added prefix functionality to the joint state topic to avoid conflicts.
   - Modified the SDK to use prefixes during URDF parsing.

2. **VX300s ROS Control Modification:**
   - Updated the ROS control component to subscribe to the correct joint state topic with prefixes.
   - Adjusted joint handle names within the ROS hardware interface to incorporate prefixes.

3. **VX300s URDF Improvement:**
   - Introduced a configurable macro in the URDF to conveniently apply prefixes to individual joints and links.

4. **Launch File and Controller Configuration:**
   - Added launch files and controller configurations in the `vx300s_bringup` package.
   - These configurations simplify the setup of multiple robot arms with distinct prefixes.

## Compatibility

This repository has been tested exclusively with ROS Noetic.

## Attribution and Acknowledgments

This codebase builds upon and modifies the work from the following repositories:
- URDF modifications from: [https://github.com/Interbotix/interbotix_ros_manipulators.git](https://github.com/Interbotix/interbotix_ros_manipulators.git)
- Modified Interbotix SDK from: [https://github.com/Interbotix/interbotix_ros_core.git](https://github.com/Interbotix/interbotix_ros_core.git)
- Enhanced Interbotix ROS Control from: [https://github.com/Interbotix/interbotix_ros_toolboxes.git](https://github.com/Interbotix/interbotix_ros_toolboxes.git)

## Getting Started

To launch a real dual ViperX 300 robot arm setup, execute the following command:
```bash
roslaunch vx300s_bringup dual_vx300s_bringup.launch
```

Feel free to explore and adapt this repository to your multi-arm control needs within the ROS environment. Your contributions and improvements are welcomed.

---

*Note: This README provides an overview of the repository. For detailed information, code, and usage examples, please refer to the respective packages and files within the repository.*
