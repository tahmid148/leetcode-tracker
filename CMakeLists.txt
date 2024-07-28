cmake_minimum_required(VERSION 3.10)

project(LeetcodeTracker VERSION 1.0)

set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_STANDARD 17)

# Add the include directory for global includes
include_directories(include)

# Add the subdirectory for ArraysHashing module
add_subdirectory(src/ArraysHashing)

# Main executable
add_executable(Main src/main.cpp)

# Link the ArraysHashing library to the Main executable
target_link_libraries(Main PRIVATE ArraysHashing)

# Optionally, include PROJECT_BINARY_DIR if necessary
# target_include_directories(Main PUBLIC "${PROJECT_BINARY_DIR}")
