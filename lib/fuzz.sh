#!/usr/bin/env bash

clang++ -DNO_MAIN -g -O2 -fsanitize=fuzzer -fsanitize=address ./lib_harness.cpp ./fuzz_test.cpp -U_FORTIFY_SOURCE -o bin_fuzz.exe && ./bin_fuzz.exe -create_missing_dirs=1 -artifact_prefix=./corpus/ ./corpus/
