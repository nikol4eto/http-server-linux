cmake_minimum_required(VERSION 3.16)
project(http11_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(http11
    src/main.cpp
    src/core/Logger.cpp
    src/net/Socket.cpp
    src/net/EpollReactor.cpp
    src/net/Connection.cpp
    src/http/HttpParser.cpp
    src/http/Router.cpp
)

target_include_directories(http11 PRIVATE include)
target_compile_options(http11 PRIVATE -Wall -Wextra -Wpedantic)
