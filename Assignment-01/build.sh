#!/bin/bash

# Basic bash shell to build, run, and then clean up after an executable

gcc -Wall main.c -o main
./main
rm main