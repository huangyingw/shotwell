#!/bin/bash -
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
cd "$SCRIPTPATH"

server=ubuntu
ssh -n "$server" "mkdir -p ~/myproject/git/linux/shotwell/"
rsync -aHv --delete --force --progress \
    . \
    "$server":~/myproject/git/linux/shotwell/
ssh -n "$server" "~/myproject/git/linux/shotwell/install.sh"

cd -
