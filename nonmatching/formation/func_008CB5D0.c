/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D03C0(void *, u8);                  /* extern */
M2C_UNK func_008D2090(s32);                         /* extern */

void func_008CB5D0(void *arg0, u8 arg1) {
    if ((arg0 != NULL) && (func_008D2090(arg0 + 0x480), (M2C_FIELD(arg0, u8 *, 6) != (arg1 & 0xFF)))) {
        M2C_FIELD(arg0, u8 *, 6) = arg1;
        if (arg1 != 0) {
            func_008D03C0(arg0 + 0x480, M2C_FIELD(arg0, u8 *, 5));
            return;
        }
        M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x489);
    }
}
