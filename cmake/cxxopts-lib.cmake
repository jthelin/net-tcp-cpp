# cxxopts - C++ Command Line Options Parser library
# https://github.com/jarro2783/cxxopts/

CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

INCLUDE(FetchContent)

set(CXXOPTS_VERSION "3.2.0")
set(CXXOPTS_SHA256 "9f43fa972532e5df6c5fd5ad0f5bac606cdec541ccaf1732463d8070bbb7f03b")

MESSAGE(STATUS "Using cxxopts library v${CXXOPTS_VERSION}")

FetchContent_Declare(cxxopts
    URL https://github.com/jarro2783/cxxopts/archive/refs/tags/v${CXXOPTS_VERSION}.tar.gz
    URL_HASH SHA256=${CXXOPTS_SHA256}
    SOURCE_DIR cxxopts-src
    DOWNLOAD_EXTRACT_TIMESTAMP True
)

FetchContent_MakeAvailable(cxxopts)
