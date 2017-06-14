#!/bin/bash -
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
cd "$SCRIPTPATH"

[ -f configure ] || ./autogen.sh
./configure
make \
    && make install \
    && ~/loadrc/gitrc/gci.sh \
    && echo success !!!

cd -