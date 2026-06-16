#!/usr/bin/env bash

clang++ -DNO_MAIN -g -O2 -fsanitize=fuzzer -fsanitize=address ./lib_harness.cpp ./main.cpp -U_FORTIFY_SOURCE -o bin_fuzz && ./bin_fuzz -create_missing_dirs=1 -artifact_prefix=./corpus/ ./corpus/
