/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00B565E0(M2C_UNK);                     /* extern */
M2C_UNK func_00B56630(s32);                         /* extern */
s32 func_00B56770(s32);                             /* extern */
s32 func_00B568D0();                                /* extern */
s32 func_00B59DE0(s32, s32);                        /* extern */
M2C_UNK func_00B5A100();                            /* extern */

void func_00B59CA0(s32 arg0) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s0 = 0;
loop_1:
    if (!(func_00B56770(var_s0) & 0xFFFF)) {
        var_s0 = (var_s0 + 1) & 0xFF;
        if (var_s0 < 8) {
            goto loop_1;
        }
    }
    if ((var_s0 & 0xFF) < 8) {
        var_s2 = func_00B59DE0(func_00B568D0(), arg0) & 0xFF;
        if (!(func_00B56770(var_s2) & 0xFFFF)) {
            temp_s0 = var_s2 & 0xFF;
            var_s1 = temp_s0;
            if (temp_s0 != 8) {
loop_14:
                if (!(func_00B56770(var_s2) & 0xFFFF) && (var_s1 != 8)) {
                    if (arg0 < 0) {
                        var_v0 = func_00B59DE0(var_s2, -1);
                        goto block_11;
                    }
                    if (arg0 > 0) {
                        var_v0 = func_00B59DE0(var_s2, 1);
block_11:
                        var_s2 = var_v0 & 0xFF;
                    }
                    var_s1 = var_s2 & 0xFF;
                    if (var_s1 == temp_s0) {
                        var_s2 = 8;
                    } else {
                        goto loop_14;
                    }
                }
            }
        }
        func_00B56630(var_s2);
        func_00B565E0(1);
        func_00B5A100();
    }
}
