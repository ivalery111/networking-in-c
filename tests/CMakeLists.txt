add_executable(test_open_socket test_open_socket.c)
target_link_libraries(test_open_socket network::network ${PROJECT_NAME}_project_warnings ${PROJECT_NAME}_sanitizers)
add_test(
    NAME test_open_socket
    COMMAND test_open_socket
)
