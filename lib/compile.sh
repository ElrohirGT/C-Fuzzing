#!/usr/bin/env bash

clang -DNO_MAIN -g -O2 -lm ./main.c -o main.exe && ./main.exe
