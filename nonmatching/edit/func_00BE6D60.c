/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC4C80(s32, s32);                        /* extern */
s32 func_00BC5ED0();                                /* extern */
s32 func_00BF3A10(s32);                             /* extern */
M2C_UNK func_00BF43B0(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_00BF44B0(M2C_UNK, s32);                    /* extern */

void func_00BE6D60(void) {
    M2C_UNK var_a2;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_v0;

    if (func_00BC5ED0() == 0) {
        var_s0 = 0;
        do {
            temp_s1 = func_00BF44B0(0, var_s0) & 0xFFFF;
            if ((temp_s1 >= 0x8000) && (temp_s1 < 0x8098)) {
                var_a2 = 0;
            } else if (func_00BF3A10(temp_s1) == 0) {
                var_a2 = 0;
            } else {
                var_s2 = 0x40;
loop_13:
                if ((func_00BC4C80(temp_s1, var_s2) & 0xFF) != 0xFF) {
                    var_v0 = var_s2 & 0xFFFF;
                } else {
                    var_s2 = (var_s2 + 1) & 0xFFFF;
                    if (var_s2 >= 0xCC) {
                        var_v0 = 0xFFFF & 0xFFFF;
                    } else {
                        goto loop_13;
                    }
                }
                if ((var_v0 & 0xFFFF) != 0xFFFF) {
                    var_a2 = 0;
                } else {
                    var_a2 = 1;
                }
            }
            func_00BF43B0(0, var_s0, var_a2);
            var_s0 += 1;
        } while (var_s0 < 0x20);
        return;
    }
    var_s0_2 = 0;
    do {
        func_00BF43B0(0, var_s0_2, 1);
        var_s0_2 += 1;
    } while (var_s0_2 < 0x20);
}
