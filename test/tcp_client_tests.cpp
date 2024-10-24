#include <gtest/gtest.h>

#include "tcp_client.h"

TEST(TcpClientTests, parse_args_help) {
    const char *args[] = {
            "PROGRAM",
            "--help"
    };

    auto client = tcp_client();
    EXPECT_FALSE(client.parse_args(2, args));
}

TEST(TcpClientTests, parse_args_default) {
    static const char *NO_ARGS[] = {
            "PROGRAM"
    };

    auto client = tcp_client();
    EXPECT_TRUE(client.parse_args(1, NO_ARGS));
}
