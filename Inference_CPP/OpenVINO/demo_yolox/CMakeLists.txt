cmake_minimum_required(VERSION 3.17)
project(Learn_Inference)

set(CMAKE_CXX_STANDARD 14)


# 设置环境变量
set(ENV{InferenceEngine_DIR} /home/damilu1/wonpeace/work_tools/OpenVINO-2023.0.1/intel/openvino_2023.0.1/runtime)
set(ENV{ngraph_DIR} /home/damilu1/wonpeace/work_tools/OpenVINO-2023.0.1/intel/openvino_2023.0.1/runtime)

# 查找'OpenCV'库
find_package(OpenCV REQUIRED)
# 查找'InferenceEngine'库
find_package(InferenceEngine REQUIRED)
# 查找'ngraph'库
find_package(ngraph REQUIRED)



# 设置可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 添加可执行文件
add_executable(openvino_demo src/yolox_openvino.cpp)


# 链接OpenCV、Inference Engine、ngraph库
target_link_libraries(openvino_demo ${InferenceEngine_LIBRARIES} ${NGRAPH_LIBRARIES} ${OpenCV_LIBS})