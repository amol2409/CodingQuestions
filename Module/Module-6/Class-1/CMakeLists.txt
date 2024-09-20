# include_directories(${CMAKE_SOURCE_DIR}/inc)

set(CLASS1_SOURCES
    main.cpp
)

add_executable(Class1 ${CLASS1_SOURCES})

target_link_libraries(Class1 common)  # Link with the common library