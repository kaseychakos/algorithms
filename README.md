## Data Structures and Algorithm Practice

#### Environment setup
Build the docker image from the root folder then run with an attached volume.
```
docker build --tag=<image>:<tag> .
docker run --rm -v </path/to/host/dir>:</working/dir> <image>

example: 
docker build --tag=dsa:latest .
docker run -it --rm -v ${pwd}:/dsa dsa
```
#### Build
While in the linux container use the `make` command or run the following to compile the code.
```
cc -o <name> <file.c>

example: 
cc -o main main.c
# then run it with ./main
```
#### Test
To run munit tests, build with special flags.
```
cc -o <output-name> <test-file.c> -lmunit

example:
cc -o munit munit.c -lmunit
# then run it with ./munit 
```

If munit is in another directory, include the path to munit files like below.
```
cc -o test tests.c ./munit/munit.c ./munit/munit.h
```