cmake_minimum_required(VERSION 3.20)

project(calc)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(app main.cpp func.cpp) 
