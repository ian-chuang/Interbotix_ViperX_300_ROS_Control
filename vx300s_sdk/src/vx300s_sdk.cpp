#include "vx300s_sdk/vx300s_sdk_obj.h"

int main( int argc, char** argv )
{
    ros::init(argc, argv, "vx300s_sdk");
    ros::NodeHandle n;
    bool success = true;
    InterbotixRobotXS bot(&n, success);
    if (success)
        ros::spin();
    else
    {
        ROS_ERROR("[vx300s_sdk] For troubleshooting, please see https://github.com/Interbotix/interbotix_ros_core/blob/main/interbotix_ros_xseries/interbotix_xs_sdk/TROUBLESHOOTING.md");
        ros::shutdown();
        
    }
    return 0;
}
