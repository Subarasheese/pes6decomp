/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0081EA60();                                /* extern */
s32 func_0081EAA0();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00960270();                                /* extern */
s32 func_00968AF0();                                /* extern */
s8 func_009A6EE0(void *, M2C_UNK, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_009A7BF0(void *, s32);                 /* extern */

s32 func_009A6690(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s8 var_v0;

    if (func_00968AF0() == 0) {
        var_s0 = 0;
    } else {
        var_s0 = 4;
    }
    if (var_s0 == 0) {
        temp_s1 = func_00960270() & 0xFFFF;
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) == 0) {
                if (func_0081EC20(1) != 0) {
                    M2C_FIELD(arg0, s8 *, 0x378) = 0x21;
                    M2C_FIELD(arg0, s32 *, 0x39C) = 0;
                } else {
                    temp_v0 = func_0081EAA0();
                    if ((temp_v0 > 0) && ((temp_s1 & 0xFFFF) >= 4)) {
                        var_v0 = func_009A6EE0(arg0, -1, temp_v0, temp_s1, 1);
                        goto block_27;
                    }
                    temp_v0_2 = func_0081EA60();
                    if ((temp_v0_2 > 0) && ((temp_s1 & 0xFFFF) >= 4)) {
                        var_v0 = func_009A6EE0(arg0, 1, temp_v0_2, temp_s1, 1);
                        goto block_27;
                    }
                    if (func_0081EB60(0x10) == 0) {
                        if (func_0081EB60(0x40) != 0) {
                            var_v0 = func_009A6EE0(arg0, 1, 4, temp_s1, 1);
                            goto block_27;
                        }
                    } else {
                        var_v0 = func_009A6EE0(arg0, -1, 4, temp_s1, 1);
                        goto block_27;
                    }
                }
            } else {
                var_v0 = 2;
                goto block_27;
            }
        } else {
            var_v0 = 1;
block_27:
            M2C_FIELD(arg0, s8 *, 0x378) = var_v0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x390) == 1) {
            func_009A7BF0(arg0, temp_s1);
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
        }
    }
    return var_s0;
}
