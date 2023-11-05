#!/bin/bash

# Compile individual source files into object files
gcc -c module1.c -o module1.o
gcc -c module2.c -o module2.o
gcc -c module3.c -o module3.o
gcc -c main.c -o main.o

# Link the object files to create the executable program and link with the math library (-lm)
gcc module1.o module2.o module3.o main.o -o module -lm

# Run the compiled program
./module
