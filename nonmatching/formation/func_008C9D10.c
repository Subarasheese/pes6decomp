/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CAD70(void *, s64, M2C_UNK, M2C_UNK); /* extern */
s32 func_008D1E40(void *);                          /* extern */
M2C_UNK func_008D1F30(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_008C9D10(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x47C) = arg1;
    if (arg1 == 0) {
        func_008D1F30(arg0 + 0x480, 0, 1);
    } else {
        func_008D1F30(arg0 + 0x480, 0, 0);
    }
    if (func_008D1E40(arg0 + 0x480) < arg1) {
        func_008CAD70(arg0, (s64) ((s64) arg1 << 0x30) >> 0x30, 0, 0);
    }
}
