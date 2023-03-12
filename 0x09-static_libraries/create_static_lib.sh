#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
