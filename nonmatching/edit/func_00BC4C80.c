/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
extern s32 func_00221A60(s32);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
s32 func_00BC4C80(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;

    temp_s6 = arg0 & 0xFFFF;
    if (temp_s6 == 0) {
        goto block_22;
    }
    temp_s7 = func_00221A60(arg1) & 0xFF;
    var_s4 = 0;
    if (temp_s7 > 0) {
        temp_s1 = arg1 & 0xFFFF;
loop_4:
        var_s2 = 0;
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
            var_s2 = 1;
        }
        if (temp_s6 != (Pes6Team_GetPlayerId(arg1, var_s4 & 0xFF, var_s2) & 0xFFFF)) {
            var_s4 += 1;
            if (var_s4 >= temp_s7) {
                goto block_22;
            }
            goto loop_4;
        }
        return var_s4 & 0xFF;
    }
block_22:
    return 0xFF;
}
