cmake_minimum_required(VERSION 3.25)

# Setup vcpkg script with CMake (note: should be placed before project() call)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
include("${CMAKE_TOOLCHAIN_FILE}")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(asio CONFIG REQUIRED)
find_package(wil CONFIG REQUIRED)
find_package(argparse CONFIG REQUIRED)
find_package(cppwinrt CONFIG REQUIRED)

set(PROJECT_NAME get-live-captions)
project(${PROJECT_NAME})
add_executable(${PROJECT_NAME} src/main.cpp src/pch.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE include/)
target_precompile_headers(${PROJECT_NAME} PRIVATE include/pch.h)

target_link_libraries(${PROJECT_NAME}
        PRIVATE asio::asio
                argparse::argparse
                WIL::WIL
                Microsoft::CppWinRT RuntimeObject.lib
)
