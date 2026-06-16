#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

void check_buf(char *buf, size_t buf_len);

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  check_buf((char *)data,
            size); // Invoke the SUT; in our case that is the check_buf function
  return 0; // Return 0, which means that the test case was processed correctly
}
