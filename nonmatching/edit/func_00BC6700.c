/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017A670(M2C_UNK);                         /* extern */
s32 Pes6Team_GetPlayerId(s32, s32, M2C_UNK);               /* extern */

s32 func_00BC6700(s32 arg0, s32 arg1) {
    M2C_UNK var_s3;
    M2C_UNK var_s5;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_v0;
    s32 var_v0_2;

    var_s3 = 0;
    temp_s4 = arg0 & 0xFFFF;
    if ((temp_s4 >= 0x40) && (temp_s4 < 0xCC)) {
        var_v0 = 3;
    } else if (temp_s4 != 0x126) {
        if ((temp_s4 >= 0xDD) && (temp_s4 < 0xFE)) {
            var_v0 = 3;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 3;
    }
    if ((func_0017A670(0) == 6) && ((var_v0 == 3) == 1)) {
        var_s3 = 1;
    }
    temp_s3 = Pes6Team_GetPlayerId(arg0, arg1, var_s3) & 0xFFFF;
    var_s5 = 1;
    if ((temp_s4 >= 0x40) && (temp_s4 < 0xCC)) {
        var_v0_2 = 3;
    } else if (temp_s4 != 0x126) {
        if ((temp_s4 >= 0xDD) && (temp_s4 < 0xFE)) {
            var_v0_2 = 3;
        } else {
            var_v0_2 = 0;
        }
    } else {
        var_v0_2 = 3;
    }
    if ((func_0017A670(0) == 6) && ((var_v0_2 == 3) == 1)) {
        var_s5 = 2;
    }
    return (temp_s3 & 0xFFFF) == (Pes6Team_GetPlayerId(arg0, arg1, var_s5) & 0xFFFF);
}
