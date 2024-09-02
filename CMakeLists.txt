cmake_minimum_required(VERSION 2.8)

project(cmake_test)

option(USE_MYMATH
  "Use my math implementation"
  ON
)
configure_file(
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h")

if(USE_MYMATH)
  include_directories("${PROJECT_SOURCE_DIR}/math")
  add_subdirectory(math)
  set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif(USE_MYMATH)

include_directories("${PROJECT_BINARY_DIR}")
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${EXTRA_LIBS})
