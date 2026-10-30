/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
s32 func_0096E890();                                /* extern */
s32 func_00984740(s32);                             /* extern */
s32 func_00B04A90(s32);                             /* extern */

s32 func_00B04C00(s32 arg0) {
    s32 temp_s0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v1;

    if (func_0096E890() != 1) {
        temp_s0 = arg0 & 0xFFFF;
        var_s2 = 0x39;
loop_5:
        var_s1 = 0;
loop_6:
        if (temp_s0 != (Pes6Team_GetPlayerId(var_s2, var_s1 & 0xFF, 0) & 0xFFFF)) {
            var_s1 += 1;
            if (var_s1 >= 0x17) {
                var_s2 = (var_s2 + 1) & 0xFFFF;
                if (var_s2 >= 0x40) {
                    var_v0 = 0xFFFF & 0xFFFF;
                } else {
                    goto loop_5;
                }
            } else {
                goto loop_6;
            }
        } else {
            var_v0 = var_s2 & 0xFFFF;
        }
        if ((var_v0 & 0xFFFF) == 0xFFFF) {
            return 1;
        }
        var_s2_2 = 0x39;
loop_17:
        var_s1_2 = 0;
loop_18:
        if (temp_s0 != (Pes6Team_GetPlayerId(var_s2_2, var_s1_2 & 0xFF, 0) & 0xFFFF)) {
            var_s1_2 += 1;
            if (var_s1_2 >= 0x17) {
                var_s2_2 = (var_s2_2 + 1) & 0xFFFF;
                if (var_s2_2 >= 0x40) {
                    var_a0 = 0xFFFF & 0xFFFF;
                } else {
                    goto loop_17;
                }
            } else {
                goto loop_18;
            }
        } else {
            var_a0 = var_s2_2 & 0xFFFF;
        }
        if ((var_a0 & 0xFFFF) == 0xFFFF) {
            var_v1 = 1;
        } else {
            var_v1 = 1;
            if (func_00984740(var_a0) != 1) {
                var_v1 = 0;
            }
        }
        return var_v1;
    }
    return func_00B04A90(arg0);
}
