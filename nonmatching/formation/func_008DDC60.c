/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008B2970(s32);                             /* extern */
s32 func_008B2990(M2C_UNK);                         /* extern */
extern char D_008EDDD8[];

void func_008DDC60(void *arg0, s32 arg1, void *arg2) {
    s32 temp_v0;
    s32 var_s2;
    u8 *var_s0;
    u8 temp_v1;
    void *var_s1;

    if ((arg1 < 0xB) && (arg1 > 0)) {
        M2C_FIELD(arg2, s8 *, 0x2D) = 1;
        M2C_FIELD(arg2, s32 *, 0) = 0x98;
        var_s2 = 0;
        var_s1 = arg2;
        var_s0 = ((void *)D_008EDDD8);
        M2C_FIELD(arg2, u8 *, 0x2C) = (u8) M2C_FIELD(arg0, u8 *, 0);
        do {
            temp_v0 = func_008B2970(var_s2);
            var_s2 += 1;
            M2C_FIELD(var_s1, s32 *, 4) = temp_v0;
            M2C_FIELD(var_s1, s32 *, 0x30) = (s32) *var_s0;
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s2 < 2);
        temp_v1 = M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), u8 *, 0xA13);
        M2C_FIELD(arg2, s32 *, 0x64) = (s32) temp_v1;
        if (temp_v1 != 3) {
            M2C_FIELD(arg2, s32 *, 0x64) = 2;
        }
        M2C_FIELD(arg2, s32 *, 0x68) = func_008B2990(2);
    }
}
