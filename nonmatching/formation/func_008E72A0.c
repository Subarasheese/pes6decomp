/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E77B0(void *, s8);                  /* extern */
M2C_UNK func_008E7AE0(void *, s8, M2C_UNK);         /* extern */
M2C_UNK func_008E7B50(s32, s32);                    /* extern */

void func_008E72A0(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 2) = arg1;
        func_008E7B50(arg0 + 0x54, arg0 + 5);
        func_008E77B0(arg0 + 0x54, arg1);
        if (M2C_FIELD(((arg1 & 0xFF) + arg0), u8 *, 5) != 0) {
            func_008E7AE0(arg0 + 0x54, arg1, 0);
        }
    }
}
