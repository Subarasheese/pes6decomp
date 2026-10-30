/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern s32 func_00221A60(s32);
s32 func_002219B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s2;

    temp_s1 = arg0 & 0xFFFF;
    temp_v0 = func_00221A60(arg1) & 0xFF;
    if (temp_s1 == 0) {
        goto block_9;
    }
    temp_s0 = temp_v0 & 0xFF;
    var_s2 = 0;
    if (temp_s0 > 0) {
loop_3:
        if (temp_s1 != (Pes6Team_GetPlayerId(arg1, var_s2, arg2) & 0xFFFF)) {
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 >= temp_s0) {
                goto block_9;
            }
            goto loop_3;
        }
        return var_s2;
    }
block_9:
    return 0xFF;
}
