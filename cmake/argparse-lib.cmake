# argparse - Argument parser for modern C++
# https://github.com/p-ranav/argparse

CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

INCLUDE(FetchContent)

set(ARGPARSE_VERSION "3.1")
set(ARGPARSE_SHA256 "d01733552ca4a18ab501ae8b8be878131baa32e89090fafdeef018ebfa4c6e46")

MESSAGE(STATUS "Using argparse library v${ARGPARSE_VERSION}")

FetchContent_Declare(argparse
        URL https://github.com/p-ranav/argparse/archive/refs/tags/v${ARGPARSE_VERSION}.tar.gz
        URL_HASH SHA256=${ARGPARSE_SHA256}
        SOURCE_DIR argparse-src
        DOWNLOAD_EXTRACT_TIMESTAMP True
)

FetchContent_MakeAvailable(argparse)
