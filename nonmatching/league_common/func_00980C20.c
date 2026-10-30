/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
extern s32 func_00229280(s32);
s32 func_002290D0(u8);                              /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00980C20(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_s4;
    s32 var_s5;
    u8 temp_a0;
    u8 temp_s1_2;
    void *var_s2;

    var_s5 = 0;
    temp_s1 = arg0 & 0xFF;
    temp_v0 = func_00229280(temp_s1);
    if (temp_v0 == 0) {
        return 0;
    }
    temp_s2 = func_002293F0();
    temp_v0_2 = func_00229280(temp_s1);
    if (temp_v0_2 == 0) {
        goto block_16;
    }
    if (temp_s2 != 0) {
        temp_s1_2 = M2C_FIELD(temp_v0_2, u8 *, 2);
        temp_s1_3 = temp_s1_2 & 0xFF;
        temp_v0_3 = func_00236680(arg0) & 0xFF;
        var_s4 = 0;
        if (temp_s1_3 > 0) {
            var_s2 = temp_s2 + (temp_v0_3 & 0xFF);
loop_10:
            if ((arg1 & 0xFFFF) != (func_002290D0(M2C_FIELD(var_s2, u8 *, 0x71)) & 0xFFFF)) {
                var_s4 += 1;
                var_s2 += 1;
                if (var_s4 >= temp_s1_3) {
                    goto block_16;
                }
                goto loop_10;
            }
        } else {
            goto block_16;
        }
    } else {
block_16:
        var_s4 = 0xFF;
    }
    temp_a0 = M2C_FIELD(temp_v0, u8 *, 2);
    if ((s32) temp_a0 > 0) {
        temp_v0_4 = var_s4 & 0xFF & 0xFF;
        if (temp_v0_4 < (s32) temp_a0) {
            temp_v1 = ((s32) ((temp_a0 - temp_v0_4) * 0x64) / (s32) temp_a0) & 0xFF;
            if (temp_v1 < 0x4B) {
                if (temp_v1 < 0x32) {
                    if (temp_v1 < 0x19) {
                        var_s5 = 0;
                    } else {
                        var_s5 = 5;
                    }
                } else {
                    var_s5 = 0xA;
                }
            } else {
                var_s5 = 0xF;
            }
        }
    }
    return var_s5;
}
