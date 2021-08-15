#include <ros/ros.h>
#include <torch/torch.h>

class TorchRos
{
public:
  TorchRos();
  
private:
  ros::NodeHandle node_handle;
};
