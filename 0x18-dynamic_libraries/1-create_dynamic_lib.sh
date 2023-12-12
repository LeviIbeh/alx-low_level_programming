#!/bin/bash
gcc -Wall -c -fPIC *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
