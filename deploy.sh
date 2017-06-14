#!/bin/bash -
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
cd "$SCRIPTPATH"

server=ubuntu
rsync -aHv --force --progress \
    --exclude-from="excludeFile" \
    . \
    "$server":~/shotwell
ssh -n "$server" "cd ~/shotwell/ && make install && echo installation success !!!"

cd -
