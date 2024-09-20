cmake_minimum_required(VERSION 3.10)

# Set the project name and C++ standard
project(DailyCodingProblems)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include common directories (if needed)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

# Add subdirectories for each module
add_subdirectory(Module-1)

