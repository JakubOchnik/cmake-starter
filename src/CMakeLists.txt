add_executable(${PROJECT_NAME} ${SOURCE_DIR}/main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})

# -- ADDING FILES (*.cxx) --

# To add *.cxx sources to the target, you have to use a target_sources command.
# target_sources(${PROJECT_NAME} PRIVATE
#                ${SOURCE_DIR}/yourFile.cpp
#                )

# -- ADDING SUBFOLDERS --

# If you have any subfolders in src (which contain CMakeLists.txt), add them in a following way:
# add_subdirectory(${SOURCE_DIR}/subfolder)

# -- ADDITIONAL LIBRARIES --

# * Boost
# Disclaimer: Boost consists of header-only and regular libraries. Only regular libs have to be linked.
# E.g. lexical_cast is a header only lib, so you only need headers included. program_options is a regular lib,
# so you have to explicitly indicate it to be linked in a following way: "Boost::program_options". Also, you have
# to specify it in find_package command.

# find_package(Boost COMPONENTS program_options REQUIRED)
# message(STATUS "Boost include dir: ${Boost_INCLUDE_DIRS}")
# target_include_directories(${PROJECT_NAME} PUBLIC ${Boost_INCLUDE_DIRS})
# target_link_libraries(${PROJECT_NAME} PUBLIC Boost::program_options)

# * CUDAToolkit
# find_package(CUDAToolkit)
# target_link_libraries(${PROJECT_NAME} PRIVATE CUDA::cudart)

# * OpenCV
# find_package(OpenCV REQUIRED)
# message(STATUS "OpenCV include dir: ${OpenCV_INCLUDE_DIRS}")
# target_include_directories(${PROJECT_NAME} PUBLIC ${OpenCV_INCLUDE_DIRS})
# target_link_libraries(${PROJECT_NAME} PUBLIC ${OpenCV_LIBS})
