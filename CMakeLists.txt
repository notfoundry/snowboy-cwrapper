cmake_minimum_required(VERSION 3.6)
project(snowboy_cwrapper)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES snowboy/snowboy-detect.h snowboy-detect-wrapper.h snowboy-detect-wrapper.cpp)
add_library(snowboy_cwrapper SHARED ${SOURCE_FILES})

target_link_libraries(snowboy_cwrapper ${CMAKE_SOURCE_DIR}/snowboy/libsnowboy-detect.a)