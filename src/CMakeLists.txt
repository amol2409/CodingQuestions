# Create a static library from the common sources
add_library(common STATIC common.cpp)

# Include the common header files (optional)
target_include_directories(common PUBLIC ${CMAKE_SOURCE_DIR}/inc)

