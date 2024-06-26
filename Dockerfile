FROM ubuntu:devel

RUN apt-get update \
    && apt-get install -y build-essential gdb \
    && rm -rf /var/lib/apt/lists/* /var/cache/apt/archives/*
#RUN apt install -y make gcc gdb 

CMD [ "/bin/bash" ]
WORKDIR /home/dsa
VOLUME [ "/home/dsa" ]