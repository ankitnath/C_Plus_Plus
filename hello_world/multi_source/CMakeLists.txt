cmake_minimum_required(VERSION 3.20)

project(hello_world)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(hello main.cpp foo.cpp)
