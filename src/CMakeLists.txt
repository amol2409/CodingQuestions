include_directories(${CMAKE_SOURCE_DIR}/inc)

set(SOURCES
    common.cpp
)

add_library(common_lib ${SOURCES})