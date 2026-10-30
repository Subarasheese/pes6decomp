/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017A670(M2C_UNK);                         /* extern */
s32 func_00221A60(s32);                             /* extern */
s32 func_00221D10(s32, s32, s32);                   /* extern */
s32 Pes6Team_GetPlayerId(s32, s32, s32);                   /* extern */
extern char D_00510FD0[];

s32 func_00BC57E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_s6;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    temp_s6 = func_00221A60(arg1) & 0xFF;
    var_s3 = 0;
    if (temp_s6 > 0) {
        temp_s1 = arg1 & 0xFFFF;
loop_2:
        var_s2 = arg2;
        if ((temp_s1 >= 0x40) && (temp_s1 < 0xCC)) {
            var_v0_2 = 3;
        } else if (temp_s1 == 0x126) {
            var_v0_2 = 3;
        } else if ((temp_s1 >= 0xDD) && (temp_s1 < 0xFE)) {
            var_v0_2 = 3;
        } else {
            var_v0_2 = 0;
        }
        if ((func_0017A670(0) == 6) && ((var_v0_2 == 3) == 1)) {
            if (arg2 == 1) {
                var_s2 = 2;
            } else {
                var_s2 = 1;
            }
        }
        if ((Pes6Team_GetPlayerId(arg1, var_s3, var_s2) & 0xFFFF) != (arg0 & 0xFFFF)) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 >= temp_s6) {
                goto block_46;
            }
            goto loop_2;
        }
        var_a0 = arg1 & 0xFFFF;
        if ((temp_s1 >= 0x40) && (temp_s1 < 0xCC)) {
            var_v1 = 3;
        } else if (temp_s1 != 0x126) {
            if ((temp_s1 >= 0xDD) && (temp_s1 < 0xFE)) {
                var_v1 = 3;
            } else {
                var_v1 = 0;
            }
        } else {
            var_v1 = 3;
        }
        if (var_v1 != 3) {
            goto block_42;
        }
        if ((*(s32 *)D_00510FD0) != 6) {
            if ((arg2 & 0xFF) == 1) {
                var_a0 = 0x112;
            }
block_42:
            var_v0 = arg2 & 0xFF;
        } else if (arg2 & 0xFF) {
            var_v0 = 2;
        } else {
            var_v0 = 1;
        }
        return func_00221D10(var_a0, var_s3, var_v0 & 0xFF);
    }
block_46:
    return 0xFF;
}
