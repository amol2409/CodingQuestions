cmake_minimum_required(VERSION 3.10)

# Set project name
project(MyProject)

set(CMAKE_CXX_STANDARD 11)      # Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # Enforce the use of C++11 standard
set(CMAKE_CXX_EXTENSIONS OFF)   # Optional: Disable compiler-specific extensions like GNU extensions

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/inc)

# Add subdirectories (modules)
add_subdirectory(src)

# Add each module and class directories as subdirectories
add_subdirectory(Module/Module-6/Class-1)
