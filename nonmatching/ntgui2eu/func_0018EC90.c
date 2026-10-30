/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00192438(void);
M2C_UNK func_0018D960(void *, s16, s16, s16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00192560(void *, s16, s16, s16, M2C_UNK, M2C_UNK); /* extern */

void func_0018EC90(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4) {
    if (M2C_FIELD(func_00192438(), s16 *, 2) >= 0x1A) {
        func_0018D960(arg0, arg2, arg3, arg4, 0, 0);
    } else {
        func_00192560(arg0, arg2, arg3, arg4, 0, 0);
    }
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (((arg2 & 0xF) << 0xF) | ((((s32) (arg3 + 0x3F) >> 6) & 0x3F) << 9) | (arg1 & 0x1FF));
}
