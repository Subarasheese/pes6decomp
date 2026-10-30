/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017A670(M2C_UNK);                         /* extern */
s32 func_00221A60(s32);                             /* extern */
s32 Pes6Team_GetPlayerId(s32, s32, s32);                   /* extern */

s32 func_00BC4DD0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;

    temp_s6 = arg0 & 0xFFFF;
    if (temp_s6 == 0) {
        goto block_24;
    }
    temp_s7 = func_00221A60(arg1) & 0xFF;
    var_s3 = 0;
    if (temp_s7 > 0) {
        temp_s1 = arg1 & 0xFFFF;
loop_4:
        var_s2 = arg2;
        if ((temp_s1 >= 0x40) && (temp_s1 < 0xCC)) {
            var_v0 = 3;
        } else if (temp_s1 == 0x126) {
            var_v0 = 3;
        } else if ((temp_s1 >= 0xDD) && (temp_s1 < 0xFE)) {
            var_v0 = 3;
        } else {
            var_v0 = 0;
        }
        if ((func_0017A670(0) == 6) && ((var_v0 == 3) == 1)) {
            if (arg2 == 1) {
                var_s2 = 2;
            } else {
                var_s2 = 1;
            }
        }
        if (temp_s6 != (Pes6Team_GetPlayerId(arg1, var_s3 & 0xFF, var_s2) & 0xFFFF)) {
            var_s3 += 1;
            if (var_s3 >= temp_s7) {
                goto block_24;
            }
            goto loop_4;
        }
        return var_s3 & 0xFF;
    }
block_24:
    return 0xFF;
}
