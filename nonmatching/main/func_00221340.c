/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
s32 func_00221340(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_s2 = 0;
loop_2:
        var_s3 = 0;
loop_3:
        if ((Pes6Team_GetPlayerId(var_s2, var_s3, arg2) & 0xFFFF) != (arg0 & 0xFFFF)) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 >= 0x17) {
                var_s2 = (var_s2 + 1) & 0xFFFF;
                if (var_s2 >= 0x39) {
block_36:
                    return 0xFFFF;
                }
                goto loop_2;
            }
            goto loop_3;
        }
        return var_s2;
    case 3:
        temp_s2 = arg0 & 0xFFFF;
        var_s1 = 0x40;
loop_14:
        var_s3_2 = 0;
loop_15:
        if ((Pes6Team_GetPlayerId(var_s1, var_s3_2, arg2) & 0xFFFF) != temp_s2) {
            var_s3_2 = (var_s3_2 + 1) & 0xFF;
            if (var_s3_2 >= 0x20) {
                var_s1 = (var_s1 + 1) & 0xFFFF;
                if (var_s1 >= 0xCC) {
                    var_s1_2 = 0;
loop_22:
                    if ((Pes6Team_GetPlayerId(0x126, var_s1_2, arg2) & 0xFFFF) != temp_s2) {
                        var_s1_2 = (var_s1_2 + 1) & 0xFF;
                        if (var_s1_2 >= 0x20) {
                            goto block_36;
                        }
                        goto loop_22;
                    }
                    return 0x126;
                }
                goto loop_14;
            }
            goto loop_15;
        }
        return var_s1;
    default:
        var_s2_2 = 0x39;
loop_29:
        var_s3_3 = 0;
loop_30:
        if ((Pes6Team_GetPlayerId(var_s2_2, var_s3_3, arg2) & 0xFFFF) != (arg0 & 0xFFFF)) {
            var_s3_3 = (var_s3_3 + 1) & 0xFF;
            if (var_s3_3 >= 0x17) {
                var_s2_2 = (var_s2_2 + 1) & 0xFFFF;
                if (var_s2_2 >= 0x40) {
                    goto block_36;
                }
                goto loop_29;
            }
            goto loop_30;
        }
        return var_s2_2;
    }
}
