cmake_minimum_required(VERSION 3.14)
project(LeetcodeTracker)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# FetchContent module to get GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
FetchContent_MakeAvailable(googletest)

# Gather all solution files
file(GLOB SOLUTION_SOURCES "src/Solutions/*.cpp")

# Add library for solutions
add_library(SolutionsLib ${SOLUTION_SOURCES})

# Add main executable
add_executable(MainExecutable src/main.cpp)
target_link_libraries(MainExecutable SolutionsLib)

# Enable testing
enable_testing()

# Gather all test files
file(GLOB TEST_SOURCES "UnitTests/*.cc")

# Add test executable
add_executable(UnitTests ${TEST_SOURCES})
target_link_libraries(UnitTests SolutionsLib GTest::gtest_main)

# Discover and run tests
include(GoogleTest)
gtest_discover_tests(UnitTests)
