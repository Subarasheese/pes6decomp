/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00229280(s32);
s32 func_00229010(s32);                             /* extern */
s32 func_00234870(u8, s32, M2C_UNK, s32);           /* extern */

s32 func_0093EAC0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s4;
    u8 temp_s3;

    temp_v0 = func_00229280(arg2 & 0xFF);
    if (temp_v0 != 0) {
        temp_v1 = arg1 & 0xFF;
        if ((temp_v1 != 0x25) && (temp_v1 != 0x24) && (temp_v1 != 0x20) && (temp_v1 != 0x1C) && (temp_v1 != 0x1A) && (temp_v1 != 0x18) && (temp_v1 != 0x16) && (temp_v1 != 0x14) && (temp_v1 != 0x12) && (temp_v1 != 0xF) && (temp_v1 != 0xD) && (temp_v1 != 0xB)) {
            goto block_29;
        }
        temp_s3 = M2C_FIELD(temp_v0, u8 *, 0);
        var_s4 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 5) > 0) {
            temp_s0 = arg0 & 0xFF;
loop_19:
            temp_s1 = func_00234870(temp_s3, var_s4, 0, arg2) & 0xFF;
            temp_s2 = func_00234870(temp_s3, var_s4, 1, arg2) & 0xFF;
            if (temp_s0 != (func_00229010(temp_s1) & 0xFF)) {
                if (temp_s0 != (func_00229010(temp_s2) & 0xFF)) {
                    var_s4 = (var_s4 + 1) & 0xFF;
                    if (var_s4 >= (s32) M2C_FIELD(temp_v0, u8 *, 5)) {
                        goto block_29;
                    }
                    goto loop_19;
                }
                return func_00229010(temp_s1) & 0xFF;
            }
            return func_00229010(temp_s2) & 0xFF;
        }
        goto block_29;
    }
block_29:
    return 0xFF;
}
