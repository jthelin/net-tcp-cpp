#!/usr/bin/env bash

# Get the directory path of this script.
CMD_DIR=$( dirname "$(realpath -s "$0")" )

BLD_DIR=${CMD_DIR}/cmake-build

rm -fR "${BLD_DIR}"
