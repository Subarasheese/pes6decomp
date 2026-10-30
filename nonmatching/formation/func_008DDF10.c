/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008B2890(s32);                             /* extern */
s32 func_008B28B0(M2C_UNK);                         /* extern */

void func_008DDF10(void *arg0, s32 arg1, void *arg2) {
    s32 var_s1;
    void *var_s0;

    if (arg1 < 0xB) {
        M2C_FIELD(arg2, s8 *, 0x2D) = 1;
        var_s1 = 0;
        M2C_FIELD(arg2, s32 *, 0) = 0x98;
        var_s0 = arg2;
        M2C_FIELD(arg2, u8 *, 0x2C) = (u8) M2C_FIELD(arg0, u8 *, 0);
        do {
            M2C_FIELD(var_s0, s32 *, 4) = func_008B2890(var_s1 & 0xFF);
            M2C_FIELD(var_s0, s32 *, 0x30) = var_s1;
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 3);
        M2C_FIELD(arg2, s32 *, 0x64) = (s32) M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), u8 *, 0xA08);
        M2C_FIELD(arg2, s32 *, 0x68) = func_008B28B0(1);
    }
}
