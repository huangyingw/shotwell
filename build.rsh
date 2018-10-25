#!/bin/bash -
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
cd "$SCRIPTPATH"

#apt-get build-dep -y shotwell
#apt-get install -y libwebp-dev
meson build && \
    ninja -C build && \
    ninja -C build install
