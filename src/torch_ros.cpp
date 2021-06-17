#include "torch_ros/torch_ros.h"

TorchRos::TorchRos()
{
  
}

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "torch_ros");
  
  TorchRos torch_ros;
  
  return 0;
}
