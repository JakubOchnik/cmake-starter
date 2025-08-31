# -- PROJECT INFORMATION --
cmake_minimum_required(VERSION 3.20.0)
project(projectName VERSION 0.1.0)
# Another variant if you need CUDA (needed for compiling CUDA kernel files: *.cu, *.cuh):
# project(projectName VERSION 0.1.0 LANGUAGES CUDA CXX)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)
