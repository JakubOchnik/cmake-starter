set(EXAMPLE_NAME example)
set(EXAMPLE_BASE_DIR ${CMAKE_SOURCE_DIR}/examples)
set(EXAMPLE_SOURCE_DIR ${EXAMPLE_BASE_DIR}/src)
set(EXAMPLE_INCLUDE_DIR ${EXAMPLE_BASE_DIR}/include)

add_subdirectory(${EXAMPLE_BASE_DIR}/src)
# Used for defining the header-only library
add_subdirectory(${EXAMPLE_INCLUDE_DIR}/lib)