/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
u16 Pes6Team_GetPlayerId(s32, s32, s32);                   /* extern */
s32 func_00225680();                                /* extern */
s32 func_002260F0(s32);                             /* extern */
s32 func_00230410();                                /* extern */
u16 func_00AF70F0(s32, s32);                        /* extern */

u16 func_00970A80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    u16 var_v0;
    u16 var_v0_2;

    if ((arg0 & 0xFF) >= 0x50) {
        return 0U;
    }
    temp_s1 = arg2 & 0xFF;
    temp_s2 = func_00225680() & 0xFFFF;
    if ((temp_s1 == 0) && (((temp_s0 = temp_s2 & 0xFFFF, ((temp_s0 < 0x40) == 0)) && (temp_s0 < 0xCC)) || (temp_s0 == 0x126) || ((func_00230410() == 1) && (temp_s0 >= 0xFE) && (temp_s0 < 0x10E)))) {
        temp_v0 = func_002260F0(arg0);
        if (temp_v0 != 0) {
            var_v0_2 = M2C_FIELD((((arg1 & 0xFF) * 0x16) + temp_v0), u16 *, 0x1E4);
        } else {
            var_v0_2 = 0;
        }
        return var_v0_2;
    }
    temp_v1 = temp_s2 & 0xFFFF;
    if ((temp_v1 >= 0xCC) && (temp_v1 < 0xDD)) {
        if (func_00210DF0() != 1) {
            var_v0 = 0;
        } else {
            var_v0 = func_00AF70F0(temp_s2, arg1);
        }
        return var_v0;
    }
    return Pes6Team_GetPlayerId(temp_s2, arg1, temp_s1);
}
