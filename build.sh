#!/bin/bash -
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
cd "$SCRIPTPATH"

[ -f configure ] || ./autogen.sh
./configure
make \
    && ~/loadrc/gitrc/gci.sh
