# 设置项目的最低 CMake 版本要求
cmake_minimum_required(VERSION 3.17)

# 设置项目名称
project(Lear_CUDA)

# 查找 CUDA
find_package(CUDA REQUIRED)

# 设置 CUDA 架构（根据你的 GPU 类型进行调整）
set(CUDA_ARCH "-arch=sm_61")  # 例如，对于 Pascal 架构的 GPU

# 添加编译选项
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CUDA_FLAGS "${CMAKE_CUDA_FLAGS} ${CUDA_ARCH}")

# 添加可执行文件
cuda_add_executable(my_program main.cu)
