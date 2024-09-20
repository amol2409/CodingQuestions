cmake_minimum_required(VERSION 3.10)
project(MyProject)  # Root project name

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for headers (use CMAKE_SOURCE_DIR to point to the root directory)
include_directories(${CMAKE_SOURCE_DIR}/inc)

# Add the src directory for common files
add_subdirectory(src)

# Add subdirectories for modules
add_subdirectory(Modules/Module-6/Class-1)

# Clean target to delete all generated files
add_custom_target(
    clean-all
    COMMAND ${CMAKE_BUILD_TOOL} clean
    COMMAND ${CMAKE_COMMAND} -E rm -rf CMakeFiles CMakeCache.txt cmake_install.cmake Makefile
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)