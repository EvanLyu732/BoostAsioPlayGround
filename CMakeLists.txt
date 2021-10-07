cmake_minimum_required(VERSION 3.2)
project(boost_asio_play)

set (CMAKE_CXX_STANDARD 11)
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

add_executable(client2
    src/client_2.cpp
)

add_executable(acceptor
    src/acceptor_socket.cpp
)

add_executable(send_hello
    src/send_hello.cpp
)

add_executable(rec_buffer
    src/rec_buffer.cpp
)

add_executable(stream_buf
    src/stream_buf.cpp
)

add_executable(client_write_to_sock
    src/client_write_to_sock.cpp
)

add_executable(server_read_some_data
    src/server_read_some_data.cpp
)

add_executable(async_write
    src/async_write.cpp
)

add_executable(async_read
    src/async_read.cpp
)

add_executable(cancel_async
    src/cancel_async.cpp
)

add_executable(shut_down_socket_server
    src/shut_down_socket_server.cpp
)

add_executable(shut_down_socket_client
    src/shut_down_socket_client.cpp
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

target_include_directories(client2
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(acceptor
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(send_hello
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(rec_buffer
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(stream_buf
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)


target_include_directories(client_write_to_sock
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(server_read_some_data
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(async_write
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(async_read
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(cancel_async
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(shut_down_socket_client
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_include_directories(shut_down_socket_server
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


target_link_libraries(client2
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(acceptor
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(send_hello
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(rec_buffer
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(stream_buf
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(client_write_to_sock
    PRIVATE
      ${Boost_INCLUDE_DIRS}
)

target_link_libraries(server_read_some_data
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)

target_link_libraries(async_write
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)

target_link_libraries(async_read
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)

target_link_libraries(cancel_async
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)

target_link_libraries(shut_down_socket_server
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)

target_link_libraries(shut_down_socket_client
    PRIVATE
      ${Boost_LIBRARY_DIRS}
)