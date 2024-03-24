# Algorithm practice

### Environment setup
Change directory to any topic then build and run from the Dockerfile.
Environment will be linux based using gcc with the ability to hot reload any changes.
```
docker build --tag=<algorithm>:latest .
docker run --rm -v /path/to/host/dir:/data <algorithm>

ex. docker run -it --rm -v ${pwd}:/data linkedlist
```

While in the linux container use the `make` command or run the following to compile the code.
```
cc -o <name> <file.c>

ex. cc -o main main.c
# then run it with ./main
```

To run munit tests, build with special flags.
```
cc -o <output-name> <test-file.c> -lmunit

ex. cc -o munit munit.c -lmunit
# then run it with ./munit 
```

If munit is in another directory, include the path to munit files like below.
```
cc -o test tests.c ./munit/munit.c ./munit/munit.h
```