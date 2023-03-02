# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

set (OpenCV_DIR "D:/source/opencv/build")

project ("opencv")

FIND_PACKAGE(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

LINK_LIBRARIES(${OpenCV_LIBS})
# 包含子项目。
add_subdirectory ("opencv")
