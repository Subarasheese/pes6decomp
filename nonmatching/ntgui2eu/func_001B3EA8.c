/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001B83A0(s32, s16, s32, s32);              /* extern */

void func_001B3EA8(void *arg0, s32 arg1, s32 arg2) {
    s64 temp_v0;
    u16 temp_v1;
    u16 var_v1;

    temp_v0 = func_001B83A0(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE), arg1, arg2);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_v0 == -1) {
        var_v1 = temp_v1 & 0xEFFF;
    } else {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) ((s64) (temp_v0 << 0x20) >> 0x20);
        var_v1 = temp_v1 | 0x1000;
    }
    M2C_FIELD(arg0, u16 *, 0xC) = var_v1;
}
