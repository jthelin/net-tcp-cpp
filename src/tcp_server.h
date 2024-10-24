#ifndef NET_TCP_CPP_TCP_SERVER_H
#define NET_TCP_CPP_TCP_SERVER_H

#include <string>
#include <argparse/argparse.hpp>

class tcp_server {
public:
    tcp_server() {
        options.add_description("Simple TCP Server");

        options.add_argument("-p", "--port")
                .help("TCP Port")
                .default_value(4567)
                .scan<'i', int>();
        options.add_argument("--verbose")
                .help("Verbose output")
                .flag();
        options.add_argument("--help")
                .help("Print usage")
                .flag();
    }

    bool parse_args(int argc, const char *argv[]);

    int Run();

private:
    int port;

    argparse::ArgumentParser options{
            "tcp_server",
            "1.0",
            argparse::default_arguments::none
    };
};

#endif //NET_TCP_CPP_TCP_SERVER_H
