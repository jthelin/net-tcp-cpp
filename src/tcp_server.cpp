#include "tcp_server.h"

#include <cstdlib>
#include <iostream>

bool tcp_server::parse_args(int argc, const char *argv[]) {
    try {
        options.parse_args(argc, argv);
    }
    catch (const std::runtime_error &err) {
        std::cerr << err.what() << std::endl;
        std::cerr << options;
        return false;
    }

    if (options.is_used("--help")) {
        std::cout << options.help().str() << std::endl;
        return false;  // Print usage
    }

    port = options.get<int>("port");

    return true;  // Arguments parsed OK
}

int tcp_server::Run() {
    std::cout << "Server: Port = " << port << std::endl;
    return EXIT_SUCCESS;
}
