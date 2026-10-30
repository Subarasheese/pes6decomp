/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 Pes6Team_GetPlayerId(s32, s32, M2C_UNK);               /* extern */
s32 func_00225680();                                /* extern */
s32 func_00225820();                                /* extern */
s32 func_002260A0();                                /* extern */
s32 func_00230410();                                /* extern */
u8 func_0024EA00(s32, s32);                         /* extern */
u8 func_0024EAC0(s32, s32);                         /* extern */
s32 func_009784B0(s32, s32);                        /* extern */

u8 func_00977F50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_v0;
    u8 var_v0;

    temp_s0_2 = func_00225680() & 0xFFFF;
    if (temp_s0_2 != 0xFFFF) {
        temp_s1 = Pes6Team_GetPlayerId(temp_s0_2, arg1, 0) & 0xFFFF;
        temp_s0 = Pes6Team_GetPlayerId(temp_s0_2, arg2, 0) & 0xFFFF;
        if (temp_s1 & 0xFFFF) {
            if (!(temp_s0 & 0xFFFF)) {
                return 0U;
            }
            if (func_00230410() != 1) {
                return func_0024EA00(temp_s1, temp_s0);
            }
            if ((arg0 & 0xFF) != (func_00225820() & 0xFF)) {
                return func_0024EAC0(temp_s1, temp_s0);
            }
            temp_s0_3 = func_009784B0(arg1, arg2) & 0xFF;
            if (temp_s0_3 >= 0x1F0) {
                var_v0 = 0;
            } else {
                temp_v0 = func_002260A0();
                if (temp_v0 != 0) {
                    var_v0 = M2C_FIELD(((temp_s0_3 & 0xFF) + temp_v0), u8 *, 2);
                } else {
                    var_v0 = 0;
                }
            }
            return var_v0;
        }
        return 0U;
    }
    return 0U;
}
