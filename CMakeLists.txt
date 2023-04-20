cmake_minimum_required(VERSION 3.20)

project(ByteCat)

set(CMAKE_CXX_STANDARD 23)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

file(GLOB SOURCES
    "${SRC_DIR}/**.hpp"
    "${SRC_DIR}/**.h"
    "${SRC_DIR}/**.cpp"
    "${SRC_DIR}/**.cc"
    "${SRC_DIR}/**.cxx"
    "${SRC_DIR}/**.asm"
)


add_executable(ByteCat "${SOURCES}")