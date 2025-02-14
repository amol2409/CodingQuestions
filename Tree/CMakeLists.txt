add_executable(tree_problems tree_problems.cpp)
target_link_libraries(tree_problems PRIVATE Common)
target_include_directories(tree_problems PRIVATE ${CMAKE_SOURCE_DIR}/Common)
