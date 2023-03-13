#!/bin/bash

# Compile all the .c files in the current directory into .o files
 gcc -c -Wall -Werror -Wextra *.c

# Create the static library from the .o files
ar rca liball.a *.o

# Clean up the .o files
rm *.o
