#include "common.c"
#include "strings.c"
#include <stdio.h>

void QTZ_TEST_FmtSizeT(size_t n, QTZ_ByteArray *buff) {
  QTZ_FMTSIZET_Result result = QTZ_FmtSizeT(n, buff);
  if (result != QTZ_FMTSIZET_OK) {
    abort();
  }
}

// #ifdef NO_MAIN
#ifndef NO_MAIN
int main() {
  uint8_t data[5];
  QTZ_ByteArray buff = {0};
  QTZ_ByteArray_Init(&buff, data, 5);

  QTZ_FMTSIZET_Result result = QTZ_FmtSizeT(0xa, &buff);
  printf("Format: %.*s", (int)buff.length, buff.data);
  return result;
}
#endif
