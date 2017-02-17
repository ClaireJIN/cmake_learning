set(SRC_LIST main.c)

include_directories(${HELLO_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${HELLO_SOURCE_DIR}/bin)

add_executable(hello ${SRC_LIST})

link_directories(${HELLO_SOURCE_DIR}/lib)

target_link_libraries(hello sum)
