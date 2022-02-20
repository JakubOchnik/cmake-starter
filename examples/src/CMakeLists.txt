add_executable(${EXAMPLE_NAME} ${EXAMPLE_SOURCE_DIR}/main.cpp)

target_include_directories(${EXAMPLE_NAME} PUBLIC ${EXAMPLE_INCLUDE_DIR})
target_link_libraries(
    ${EXAMPLE_NAME}
    PUBLIC matrix int_processor
)
target_sources(${EXAMPLE_NAME} PRIVATE
                ${EXAMPLE_SOURCE_DIR}/RandomFunction.cpp
                )

add_subdirectory(${EXAMPLE_SOURCE_DIR}/lib)