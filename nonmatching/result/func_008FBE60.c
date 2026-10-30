/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00C12980(s32);                             /* extern */
s32 func_00C12A00(s32);                             /* extern */
s32 func_00C12A80(s32);                             /* extern */
s32 func_00C12B00(s32);                             /* extern */
s32 func_00C132B0(u32);                             /* extern */
s32 func_00C132C0(u32);                             /* extern */
u32 func_00C137B0(u32);                             /* extern */
u32 func_00C13840();                                /* extern */

u32 func_008FBE60(u32 arg0, s32 arg1) {
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s3;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_v0;
    u32 temp_s1;
    u32 temp_s2;
    u32 temp_s5;
    u32 var_s0;
    u32 var_s4;

    var_s0 = arg0;
    temp_s2 = func_00C13840();
    var_s3 = func_00C132B0(var_s0) & 0xFF;
    if (var_s0 != arg1) {
        var_s4_2 = 2;
    } else {
        var_s4_2 = 1;
    }
    if (temp_s2 < var_s0) {
loop_4:
        temp_s1 = var_s0;
        if (var_s4_2 < 3) {
            var_s0 = func_00C137B0(var_s0);
            if (func_00C12A80(func_00C132C0(var_s0) & 0xFF) == 0) {
                temp_s1_2 = func_00C132C0(var_s0) & 0xFF;
                var_s5 = 0;
                if (func_00C12B00(temp_s1_2) != 0) {
                    var_s5 = (temp_s1_2 & 0xFF) == 0x19;
                    if (var_s5 == 0) {
                        var_v0 = func_00C12A00(temp_s1_2) != 0;
                        if (var_v0 == 0) {
                            var_v0 = func_00C12980(temp_s1_2) != 0;
                        }
                        var_s5 = var_v0 ^ 1;
                    }
                }
                if ((var_s5 != 0) && ((var_s3 & 0xFF) != (func_00C132B0(var_s0) & 0xFF))) {
                    var_s3 = func_00C132B0(var_s0) & 0xFF;
                    var_s4_2 += 1;
                }
                if (temp_s2 >= var_s0) {

                } else {
                    goto loop_4;
                }
            } else {
                var_s0 = temp_s1;
            }
        }
    }
    var_s4 = var_s0;
    temp_s5 = var_s0;
    temp_v0 = func_00C132B0(var_s0) & 0xFF;
    if (temp_s2 < var_s0) {
loop_21:
        var_s0 = func_00C137B0(var_s0);
        temp_s3 = func_00C132C0(var_s0) & 0xFF;
        if (func_00C12A80(temp_s3) == 0) {
            if ((func_00C12A00(temp_s3) == 0) || ((temp_s3 & 0xFF) == 0x19)) {
                if ((temp_v0 & 0xFF) == (func_00C132B0(var_s0) & 0xFF)) {
                    var_s4 = var_s0;
                    goto block_32;
                }
                return var_s4;
            }
block_32:
            if (temp_s2 >= var_s0) {
                goto block_34;
            }
            goto loop_21;
        }
        return var_s4;
    }
block_34:
    return temp_s5;
}
