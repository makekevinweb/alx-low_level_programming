#!/bin/bash
gcc -Wall -Pendatic -Wextra -c *.c
ar cr liball.a *.o
