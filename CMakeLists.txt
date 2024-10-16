CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

PROJECT(net-tcp-cpp LANGUAGES CXX)

SET(CMAKE_CXX_STANDARD 17)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE "Debug")
endif ()

MESSAGE(STATUS "Building project ${PROJECT_NAME} with build config = ${CMAKE_BUILD_TYPE}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

# Google Test Framework
INCLUDE(googletest)

# Enable Address Sanitizer in Debug builds
IF (NOT (MSVC))
    string(APPEND CMAKE_CXX_FLAGS_DEBUG " -fsanitize=address")
    string(APPEND CMAKE_LINKER_FLAGS_DEBUG " -fsanitize=address")
ENDIF ()

# ADD_SUBDIRECTORY(src)

# Testing
ENABLE_TESTING()
# ADD_SUBDIRECTORY(tests)
