/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00824960(s16);                             /* extern */
s8 func_00824A00(s16, s32);                         /* extern */
s16 func_00824A60(s16, s32);                        /* extern */
s32 func_00962DB0(s16);                             /* extern */
extern char D_008A5F70[];
extern char D_008AB328[];
extern char D_008AB32A[];

s32 func_00962CA0(s16 arg0) {
    s16 temp_v0;
    s16 var_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s1;

    temp_v1 = arg0 & 0xFFFF;
    var_s0 = 0x20;
    if ((temp_v1 == 0xDD) || ((temp_v1 >= 0xDE) && (temp_v1 < 0xFE))) {
        return func_00962DB0(arg0);
    }
    temp_v0 = func_00824960(arg0) & 0xFF;
    if (temp_v0 < 0x20) {
        var_s0 = temp_v0;
    }
    (*(s16 *)D_008AB32A) = var_s0;
    var_s1 = 0;
    (*(s16 *)D_008AB328) = arg0;
loop_8:
    temp_s3 = var_s1 & 0xFFFF;
    if (temp_s3 < (var_s0 & 0xFFFF)) {
        temp_s4 = var_s1 & 0xFF;
        M2C_FIELD((((void *)D_008A5F70) + ((var_s1 & 0xFFFF) * 2)), s16 *, 0x53BC) = func_00824A60(arg0, temp_s4);
        var_s1 = (var_s1 + 1) & 0xFFFF;
        M2C_FIELD((((void *)D_008A5F70) + temp_s3), s8 *, 0x540C) = func_00824A00(arg0, temp_s4);
        goto loop_8;
    }
    return 4;
}
