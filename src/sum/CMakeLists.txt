set(CMAKE_C_COMPILER gcc)

set(SRC_LIST sum.c)

include_directories(${HELLO_SOURCE_DIR}/include)

set(LIBRARY_OUTPUT_PATH ${HELLO_SOURCE_DIR}/lib)

add_library(sum STATIC ${SRC_LIST})
