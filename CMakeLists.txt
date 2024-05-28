cmake_minimum_required(VERSION 3.10)
project(CGMath CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(CGMath STATIC source/vec.cpp)
target_include_directories(CGMath PUBLIC include)

add_executable(test source/main.cpp)
target_link_libraries(test PUBLIC CGMath)
target_include_directories(test PUBLIC include)