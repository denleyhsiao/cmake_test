project(MathFunctions)

aux_source_directory(. DIR_LIB_SRCS)
add_library(${PROJECT_NAME} ${DIR_LIB_SRCS})

install (TARGETS ${PROJECT_NAME} DESTINATION bin)
install (FILES MathFunctions.h DESTINATION include)

