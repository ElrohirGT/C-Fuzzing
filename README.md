# C Fuzzing

Fuzzing guide for C using: https://appsec.guide/docs/fuzzing/c-cpp/libfuzzer/

## Tasks

### basic

Basic fuzzing

```bash
afl-cc -g -O0 harness.c -o fuzzer.exe
AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1 AFL_SKIP_CPUFREQ=1 afl-fuzz -i seeds/ -o output/ -- ./fuzzer.exe
```

<!-- ### asan -->

<!---->

<!-- Fuzzing taking address sanitization into account. -->

<!---->

<!-- ```bash -->

<!---->

<!-- ``` -->
