#include "tcp_client.h"

#include <cstdlib>

int main(int argc, const char *argv[]) {
    auto client = tcp_client();
    if (!client.parse_args(argc, argv)) {
        // std::cout << "Usage: " << client.usage() << std::endl;
        return EXIT_FAILURE;
    }

    int rc = client.Run();

    return rc;
}
