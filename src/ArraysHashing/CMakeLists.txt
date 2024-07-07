# Create a library for ArraysHashing
add_library(ArraysHashing 
    containsDuplicate.cpp
)

# Include directories for ArraysHashing library
target_include_directories(ArraysHashing PUBLIC 
    ${CMAKE_SOURCE_DIR}/include
)
