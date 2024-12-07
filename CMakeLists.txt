cmake_minimum_required(VERSION 3.16)
project(Simulation VERSION 1.0
                   LANGUAGES CXX)
include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_OBJECT_PATH_MAX 1024)

add_subdirectory(src)
add_subdirectory(tests)