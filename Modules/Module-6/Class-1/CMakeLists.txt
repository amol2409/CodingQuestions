cmake_minimum_required(VERSION 3.10)
project(Module6_Class1)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for common and local headers
include_directories(${CMAKE_SOURCE_DIR}/inc)  # Common headers in the root directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)  # Class-1 specific headers

# Add the source files for Class-1
set(SOURCE_FILES
    src/problem-1.cpp
    src/problem-2.cpp
)

# Add the main executable
add_executable(Class1Main main.cpp ${SOURCE_FILES})

# Link with any common libraries if necessary (for example common.cpp)
target_link_libraries(Class1Main common_lib)

# Add tests for this module
# add_executable(TestClass1 test.cpp ${SOURCE_FILES})
# target_link_libraries(TestClass1 common_lib)

# Clean target for this class only
add_custom_target(
    clean-class1
    COMMAND ${CMAKE_BUILD_TOOL} clean
    COMMAND ${CMAKE_COMMAND} -E rm -rf CMakeFiles CMakeCache.txt cmake_install.cmake Makefile
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)