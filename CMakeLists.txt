cmake_minimum_required(VERSION 3.14)
project(Voxel
        VERSION 0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE VOXEL_SOURCE src/*.cpp)
add_executable(Voxel ${VOXEL_SOURCE})