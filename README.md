# C Fuzzing

Fuzzing guide for C using: https://appsec.guide/docs/fuzzing/c-cpp/libfuzzer/

## Tasks

### basic

Basic fuzzing

```bash
clang++ -DNO_MAIN -g -O2 -fsanitize=fuzzer harness.cpp main.cpp -o fuzz.exe && ./fuzz.exe
```

### asan

Fuzzing taking address sanitization into account.

```bash
clang++ -DNO_MAIN -g -O2 -fsanitize=fuzzer -fsanitize=address harness.cpp main_asan.cpp -U_FORTIFY_SOURCE -o fuzz.exe && ./fuzz.exe
```
