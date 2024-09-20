# CMake file for Class-1 in Module-1
add_executable(Module1_Class1_abc abc.cpp)

# Link common libraries if necessary
target_link_libraries(Module1_Class1_abc PRIVATE common)

