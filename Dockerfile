FROM ubuntu:latest

RUN apt-get update
RUN apt-get install -y build-essential
#RUN apt install -y make gcc gdb 

CMD [ "/bin/bash" ]
WORKDIR /home/dsa
VOLUME [ "/home/dsa" ]