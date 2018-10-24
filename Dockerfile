FROM ubuntu:18.04

RUN apt-get update && apt-get install -y git cscope manpages-pl manpages-fr-extra build-essential ssh rsync
COPY ./sources.list /etc/apt/sources.list
RUN apt-get update && apt-get build-dep -y shotwell
COPY ./etc/ssh/ssh_config /etc/ssh/ssh_config
RUN apt-get build-dep -y libxml2-utils


# Clean up APT when done.
RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
WORKDIR /root
COPY ./entrypoint.sh /entrypoint.sh

CMD ["/entrypoint.sh"]
