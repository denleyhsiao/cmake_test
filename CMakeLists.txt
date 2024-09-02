cmake_minimum_required(VERSION 2.8)

project(cmake_test)
aux_source_directory(. DIR_SRCS)
add_subdirectory(math)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} MathFunctions)
