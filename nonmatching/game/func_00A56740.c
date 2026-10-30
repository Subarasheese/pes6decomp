/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
s16 func_009B32D0(u16, u16, s32);                   /* extern */
extern char D_0059226C[];

s32 func_00A56740(void *arg0, u16 arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 >= 0x800) {
        if (temp_a0 >= 0x1900) {
            var_v0 = 0x20;
        } else {
            temp_v1 = 0x1900 - temp_a0;
            var_v0 = (((temp_v1 * 0x10) / 6400) + ((u32) (temp_v1 * 0x10) >> 0x1F) + 0x20) & 0xFFFF;
        }
        var_s2 = var_v0 & 0xFFFF;
        if ((temp_a0 < 0x1500) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x20)) {
            var_s2 = (((var_s2 & 0xFFFF) * 2) + 0x10) & 0xFFFF;
        }
        temp_s2 = var_s2 & 0xFFFF;
        if (temp_s2 < (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF)) {
            (*(s16 *)D_0059226C) = func_009B32D0(arg1, M2C_FIELD(arg0, u16 *, 0x28), (temp_s2 << 8) & 0xFFFF);
            return 0;
        }
        return 1;
    }
    return 1;
}
