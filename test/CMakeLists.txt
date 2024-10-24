add_executable(tcp_server_tests
        tcp_server_tests.cpp
)
target_link_libraries(tcp_server_tests
        PRIVATE
        tcp_server_lib
        gtest_main
)
target_include_directories(tcp_server_tests
        PRIVATE
        ../src
)
add_test(NAME tcp_server_tests
        COMMAND tcp_server_tests
)
add_test(NAME tcp_server_help
        COMMAND server --help
)
set_tests_properties(tcp_server_help PROPERTIES WILL_FAIL true)

add_executable(tcp_client_tests
        tcp_client_tests.cpp
)
target_link_libraries(tcp_client_tests
        PRIVATE
        tcp_client_lib
        gtest_main
)
target_include_directories(tcp_client_tests
        PRIVATE
        ../src
)
add_test(NAME tcp_client_tests
        COMMAND tcp_client_tests
)
add_test(NAME tcp_client_help
        COMMAND client --help
)
set_tests_properties(tcp_client_help PROPERTIES WILL_FAIL true)
