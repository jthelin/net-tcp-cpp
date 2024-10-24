#include "tcp_server.h"

#include <cstdlib>

int main(int argc, const char *argv[]) {
    auto server = tcp_server();
    if (!server.parse_args(argc, argv)) {
        // std::cout << "Usage: " << server.usage() << std::endl;
        return EXIT_FAILURE;
    }

    int rc = server.Run();

    return rc;
}
