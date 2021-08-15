#include "torch_ros/torch_ros.h"

TorchRos::TorchRos()
{
    torch::Tensor tensor_cpu = torch::rand({2, 3});
    ROS_INFO_STREAM("\nCPU Tensor:\n " << tensor_cpu << std::endl);
    
    torch::Device device = torch::kCPU;
    if (torch::cuda::is_available()) {
        ROS_INFO("CUDA is available");
        device = torch::kCUDA;
        
        torch::Tensor tensor_gpu = torch::rand({2, 3}, device);
        ROS_INFO_STREAM("\nGPU Tensor:\n " << tensor_gpu << std::endl);
    }
}

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "torch_ros");
  
  TorchRos torch_ros;
  
  return 0;
}
