#include "vx300s_ros_control/vx300s_hardware_interface_obj.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "vx300s_hardware_interface");
    ros::NodeHandle nh;
    ros::MultiThreadedSpinner spinner(2);
    XSHardwareInterface RobotInterface(nh);
    spinner.spin();
    return 0;
}
