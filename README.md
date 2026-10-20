# C Fuzzing

Fuzzing guide for C using: https://appsec.guide/docs/fuzzing/c-cpp/libfuzzer/

## Tasks

### build

Build the harness.

```bash
afl-cc -g -O0 -fprofile-instr-generate -fcoverage-mapping harness.c -o fuzzer.exe -fprofile-instr-generate
```

### fuzz

Basic fuzzing

```bash
xc build
AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1 AFL_SKIP_CPUFREQ=1 afl-fuzz -i seeds/ -o output/ -- ./fuzzer.exe @@
```

### coverage

Basic fuzzing coverage

```bash
./cov-analysis.sh build xc build
./cov-analysis.sh -d output/ -e "./fuzzer.exe @@"
```

<!-- ### asan -->

<!---->

<!-- Fuzzing taking address sanitization into account. -->

<!---->

<!-- ```bash -->

<!---->

<!-- ``` -->
