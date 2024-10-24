add_library(tcp_server_lib
        tcp_server.cpp
        tcp_server.h
)
target_link_libraries(tcp_server_lib
        PUBLIC
        argparse
)

add_library(tcp_client_lib
        tcp_client.cpp
        tcp_client.h
)
target_link_libraries(tcp_client_lib
        PUBLIC
        argparse
)

add_executable(client
        client_main.cpp
)
target_link_libraries(client
        PRIVATE
        tcp_client_lib
)

add_executable(server
        server_main.cpp
)
target_link_libraries(server
        PRIVATE
        tcp_server_lib
)
