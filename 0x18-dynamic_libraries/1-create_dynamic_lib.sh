#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
export LD_LIBRARY_PATH="./"
