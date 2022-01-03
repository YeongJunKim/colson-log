* How to g++ build
``` bash
$ g++ -o test main.cpp -I./ -D TEST1
$ g++ -o test main.cpp -I./ -D TEST2
```
* How to gcc build
``` bash
$ gcc -o test main.c -I./
```
* How to CMake build
``` bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```
* read output binary file
``` bash
$ nm ${TARGET} | grep ${TEXT}
```