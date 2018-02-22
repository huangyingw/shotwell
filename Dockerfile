FROM ubuntu:17.10

RUN apt-get update && apt-get install -y curl wget perl pwgen --no-install-recommends vim-gnome git cscope curl wget perl pwgen --no-install-recommends software-properties-common python3-software-properties gdebi-core realpath build-essential iputils-ping netcat

RUN apt-get update && apt-get install -y inetutils-traceroute
COPY ./sources.list /etc/apt/sources.list
RUN apt-get update && apt-get build-dep -y shotwell
RUN apt-get install -y ssh rsync
COPY ./etc/ssh/ssh_config /etc/ssh/ssh_config

# Clean up APT when done.
RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
WORKDIR /root
COPY ./entrypoint.sh /entrypoint.sh

CMD ["/entrypoint.sh"]
