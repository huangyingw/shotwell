#!/bin/bash -
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
cd "$SCRIPTPATH"

server=u1604
rsync -aHv --force --progress \
    --exclude-from="excludeFile" \
    . \
    "$server":~/shotwell
ssh -n "$server" "~/shotwell/build.sh"

cd -
