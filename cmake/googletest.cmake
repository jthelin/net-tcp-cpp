# Google Test Framework

# https://github.com/google/googletest/blob/master/googletest/README.md

CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

INCLUDE(FetchContent)

set(GOOGLE_TEST_VERSION "1.15.2")
set(GOOGLE_TEST_SHA256 "7b42b4d6ed48810c5362c265a17faebe90dc2373c885e5216439d37927f02926")

MESSAGE(STATUS "Using googletest v${GOOGLE_TEST_VERSION}")

FetchContent_Declare(googletest
        URL https://github.com/google/googletest/archive/refs/tags/v${GOOGLE_TEST_VERSION}.tar.gz
        URL_HASH SHA256=${GOOGLE_TEST_SHA256}
        SOURCE_DIR googletest-src
        DOWNLOAD_EXTRACT_TIMESTAMP True
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)
