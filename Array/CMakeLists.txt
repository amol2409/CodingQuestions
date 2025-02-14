file(GLOB ARRAY_SOURCES "*.cpp")

foreach(SRC_FILE ${ARRAY_SOURCES})
    get_filename_component(EXE_NAME ${SRC_FILE} NAME_WE)  # Extract file name without extension
    add_executable(${EXE_NAME} ${SRC_FILE})
    target_link_libraries(${EXE_NAME} PRIVATE Common)
    target_include_directories(${EXE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Common)
endforeach()
