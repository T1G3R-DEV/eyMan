
cmake_minimum_required(VERSION 3.30.0)
project(eyMan)
include(FetchContent)
FetchContent_Declare(dlib
    GIT_REPOSITORY https://github.com/davisking/dlib.git
    GIT_TAG        v19.24
)
FetchContent_MakeAvailable(dlib)

add_executable(main ./src/main.cpp)
target_link_libraries(main dlib::dlib)
