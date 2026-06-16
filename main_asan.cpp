#include <cstdio>
#include <stdlib.h>
#include <string.h>

void check_buf(char *buf, size_t buf_len) {
  char *last;

  if (buf_len > 0 && buf[0] == 'a') {
    if (buf_len > 1 && buf[1] == 'b') {
      if (buf_len > 2 && buf[2] == 'c') {
        last = (char *)malloc(1 * sizeof(char)); // Allocate memory
        last[0] = 'c';                           // Write the character 'c'
        last[1] = '\0'; // Write terminating null byte. A heap-buffer overflow
                        // is happening here!
        printf("%s", last); // Print the string
        free(last);         // Free allocated memory
      }
    }
  }
}
