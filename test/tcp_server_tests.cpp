#include <gtest/gtest.h>

#include "tcp_server.h"

TEST(TcpServerTests, parse_args_help) {
    const char *args[] = {
            "PROGRAM",
            "--help"
    };

    auto server = tcp_server();
    EXPECT_FALSE(server.parse_args(2, args));
}

TEST(TcpServerTests, parse_args_default) {
    static const char *NO_ARGS[] = {
            "PROGRAM"
    };

    auto server = tcp_server();
    EXPECT_TRUE(server.parse_args(1, NO_ARGS));
}
