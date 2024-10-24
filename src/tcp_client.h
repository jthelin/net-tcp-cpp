#ifndef NET_TCP_CPP_TCP_CLIENT_H
#define NET_TCP_CPP_TCP_CLIENT_H

#include <string>
#include <argparse/argparse.hpp>

class tcp_client {
public:
    tcp_client() {
        options.add_description("Simple TCP Client");

        options.add_argument("--host")
                .help("Hostname")
                .default_value("localhost");
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
    std::string hostname;
    int port;

    argparse::ArgumentParser options{
            "tcp_client",
            "1.0",
            argparse::default_arguments::none
    };
};

#endif //NET_TCP_CPP_TCP_CLIENT_H
