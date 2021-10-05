cmake_minimum_required(VERSION 3.2)
project(boost_asio_play)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})


add_executable(client_server
    src/client.cpp
)

target_include_directories(client_server
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(client_server
    PRIVATE
      ${Boost_LIBRARY_DIRS}
    #   ${Boost_FILESYSTEM_LIBRARY}
    #   ${Boost_SYSTEM_LIBRARY}
)

