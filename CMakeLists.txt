cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(get-live-captions)
add_executable(get-live-captions src/main.cpp src/pch.cpp)
target_precompile_headers(get-live-captions PRIVATE src/pch.h)

find_package(asio CONFIG REQUIRED)
find_package(wil CONFIG REQUIRED)
find_package(argparse CONFIG REQUIRED)
find_package(cppwinrt CONFIG REQUIRED)

target_link_libraries(get-live-captions PRIVATE WIL::WIL asio::asio Microsoft::CppWinRT argparse::argparse)
