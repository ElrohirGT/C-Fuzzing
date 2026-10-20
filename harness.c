#include "main.c"
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  FILE *f = fopen(argv[1], "r");
  if (f == NULL) {
    return 0;
  }

  char buffer[3];
  if (fread(buffer, 1, 3, f) != 3) {
    return 0;
  }
  check_buf(buffer, 3);
}
