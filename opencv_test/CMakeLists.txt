cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(opencv_test)
find_package(OpenCV REQUIRED)
add_executable(opencv_test src/opencv_test.cpp)
target_link_libraries(opencv_test ${OpenCV_LIBS})
