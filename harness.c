#include "main.c"
#include <unistd.h>

int main(int argc, char **argv) {
  char buffer[3];
  read(STDIN_FILENO, buffer, 3);
  check_buf(buffer, 3);
}
