#include "include/FuzzedDataProvider.h"
#include "include/common.h"
#include <cstddef>
#include <cstdlib>

extern void QTZ_TEST_FmtSizeT(size_t n, QTZ_ByteArray *buff);

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size);

  const size_t capacity = 100;
  uint8_t inner[capacity];
  QTZ_ByteArray buff = {0};
  QTZ_ByteArray_Init(&buff, inner, capacity);

  if (size > 0) {
    size_t n = fuzzed_data.ConsumeIntegral<size_t>();
    QTZ_TEST_FmtSizeT(n, &buff);
  }

  QTZ_ByteArray_Reset(&buff);
  return 0;
}
