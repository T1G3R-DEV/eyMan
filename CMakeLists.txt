
cmake_minimum_required(VERSION 3.30.0)
project(eyMan)

set( DUSE_SSE2_INSTRUCTIONS ON)
set( DUSE_SSE4_INSTRUCTIONS ON)
set( DUSE_AVX_INSTRUCTIONS ON)

include(FetchContent)
FetchContent_Declare(dlib
    GIT_REPOSITORY https://github.com/davisking/dlib.git
    GIT_TAG        v19.24
)
FetchContent_MakeAvailable(dlib)
FetchContent_Declare(
    opencv
    GIT_REPOSITORY https://github.com/opencv/opencv.git
    GIT_TAG        4.11.0
)

FetchContent_MakeAvailable(opencv)

# Find on pc
set(OpenCV_DIR ${CMAKE_CURRENT_BINARY_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(eyMan ./src/main.cpp)

target_link_libraries(eyMan dlib::dlib ${OpenCV_LIBS})
