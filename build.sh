#!/usr/bin/env bash

# Get the directory path of this script.
CMD_DIR=$( dirname "$(realpath -s "$0")" )

SYSTEM_DEBUG=${SYSTEM_DEBUG:-"false"}

BUILD_DIR=${CMD_DIR}/cmake-build
INSTALL_DIR=${BUILD_DIR}/_install

mkdir -p "${BUILD_DIR}" || exit 1
mkdir -p "${INSTALL_DIR}" || exit 1

pushd "${BUILD_DIR}" > /dev/null || exit 1
pwd

# Exit immediately if a command exits with a non-zero status.
set -e
set -o pipefail

echo "---- cmake generate ----"
cmake ..

echo "---- cmake build ----" &&
set -x
cmake --build . "$@"

echo "---- cmake install ----" &&
cmake --install . --prefix "${INSTALL_DIR}"

if [ "${SYSTEM_DEBUG}" == "true" ]; then
  echo "-- Install dir = ${INSTALL_DIR}"
  ls -lhR "${INSTALL_DIR}"
fi
