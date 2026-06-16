#include "include/common.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <stddef.h>
#include <strings.h>

extern void QTZ_TEST_FmtSizeT(size_t n, QTZ_ByteArray *buff);

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  uint8_t inner[5];
  QTZ_ByteArray buff = {0};
  QTZ_ByteArray_Init(&buff, inner, size);

  if (size > 0) {
    size_t n = (size_t)data[0];
    QTZ_TEST_FmtSizeT(n, &buff);
  }

  QTZ_ByteArray_Reset(&buff);
  return 0;
}
