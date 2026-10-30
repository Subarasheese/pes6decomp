/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00824960(M2C_UNK);                         /* extern */
s8 func_00824A00(M2C_UNK, s32);                     /* extern */
s16 func_00824A60(M2C_UNK, s32);                    /* extern */
extern char D_008A5F70[];
extern char D_008AB328[];
extern char D_008AB32A[];

s32 func_00962DB0(s16 arg0) {
    s16 temp_v0;
    s16 var_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s1;

    var_s0 = 0x20;
    temp_v0 = func_00824960(0x126) & 0xFF;
    if (temp_v0 < 0x20) {
        var_s0 = temp_v0;
    }
    (*(s16 *)D_008AB328) = arg0;
    (*(s16 *)D_008AB32A) = var_s0;
    var_s1 = 0;
loop_4:
    temp_s2 = var_s1 & 0xFFFF;
    if (temp_s2 < (var_s0 & 0xFFFF)) {
        temp_s3 = var_s1 & 0xFF;
        M2C_FIELD((((void *)D_008A5F70) + ((var_s1 & 0xFFFF) * 2)), s16 *, 0x53BC) = func_00824A60(0x126, temp_s3);
        var_s1 = (var_s1 + 1) & 0xFFFF;
        M2C_FIELD((((void *)D_008A5F70) + temp_s2), s8 *, 0x540C) = func_00824A00(0x126, temp_s3);
        goto loop_4;
    }
    return 4;
}
