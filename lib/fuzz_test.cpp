#include "include/common.h"
#include "include/strings.h"
#include <cstdlib>

void QTZ_TEST_FmtSizeT(size_t n, QTZ_ByteArray *buff) {
  QTZ_FMTSIZET_Result result = QTZ_FmtSizeT(n, buff);
  if (result != QTZ_FMTSIZET_OK) {
    abort();
  }
}
