# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(Boilerplate VERSION 1.0)

# Request C++ 11 standard features
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

configure_file(include/Config.h.in
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Config.h")

# Compile the passed source files into an excecutable
add_executable(Boilerplate
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")

target_include_directories(Boilerplate PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include")

# Set the output directory for excecutables
set_target_properties(Boilerplate
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<CONFIG>")

target_compile_features(Boilerplate PUBLIC cxx_std_11)

# add compiler warning flags just when building this project
# via the BUILD_INTERFACE generator expression
set(gcc_like_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang,GNU>")
set(msvc_flags "$<COMPILE_LANG_AND_ID:CXX,MSVC>")

set(gcc_flags "-Wall;-Wextra;-Wshadow;-Wshadow;-Wformat=2;-Werror;-Wunused")
set(msvc_flags "-W3")

target_compile_options(Boilerplate PRIVATE
    "$<${gcc_like_cxx}:$<BUILD_INTERFACE:${gcc_flags}>>"
    "$<${msvc_cxx}: $<BUILD_INTERFACE:${msvc_flags}>>")
