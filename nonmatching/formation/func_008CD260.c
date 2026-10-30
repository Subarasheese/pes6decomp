/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CB5D0(M2C_UNK);                     /* extern */
M2C_UNK func_008D0570(void *, u8);                  /* extern */

void func_008CD260(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 3) = 0U;
        func_008CB5D0(0);
        func_008D0570(arg0 + 0x480, M2C_FIELD(arg0, u8 *, 3));
    }
}
