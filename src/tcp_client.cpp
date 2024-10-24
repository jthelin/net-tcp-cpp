#include "tcp_client.h"

#include <cstdlib>
#include <iostream>

bool tcp_client::parse_args(int argc, const char *argv[]) {
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

    hostname = options.get("host");
    port = options.get<int>("port");

    return true;  // Arguments parsed OK
}

int tcp_client::Run() {
    std::cout << "Client: Hostname = " << hostname << " Port = " << port << std::endl;
    return EXIT_SUCCESS;
}
