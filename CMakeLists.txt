cmake_minimum_required(VERSION 3.2)
project(boost_asio_play)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})


add_executable(client
    src/client.cpp
)

add_executable(server
    src/server.cpp
)

target_include_directories(client
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(server
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(client
    PRIVATE
      ${Boost_LIBRARY_DIRS}
    #   ${Boost_FILESYSTEM_LIBRARY}
    #   ${Boost_SYSTEM_LIBRARY}
)

target_link_libraries(server
    PRIVATE
      ${Boost_LIBRARY_DIRS}
    #   ${Boost_FILESYSTEM_LIBRARY}
    #   ${Boost_SYSTEM_LIBRARY}
)

