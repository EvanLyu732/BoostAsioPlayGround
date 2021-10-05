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

add_executable(active_socket
    src/active_socket.cpp
)

add_executable(passive_socket
    src/passive_socket.cpp
)

add_executable(dns_name_resolve
    src/dns_name_resolve.cpp
)

target_include_directories(client
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(server
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(active_socket
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(passive_socket
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(dns_name_resolve
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(client
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)

target_link_libraries(server
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)


target_link_libraries(active_socket
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)


target_link_libraries(passive_socket
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(dns_name_resolve
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)
