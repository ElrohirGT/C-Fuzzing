#include "main.c"
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  FILE *f = fopen(argv[1], "r");
  // NOTE: Guaranteed by the fuzzer
  // if (f == NULL) {
  //   return 0;
  // }

  char buffer[4];
  check_buf(buffer, fread(buffer, 1, 4, f) - 1);
}
