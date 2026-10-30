/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
u16 func_00224BC0(s32, s32);                        /* extern */
s32 func_00225680();                                /* extern */

s32 func_009492B0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    u16 var_v0;

    if ((arg0 & 0xFF) >= 0x50) {
        return 0;
    }
    temp_a0 = func_00225680() & 0xFFFF;
    if ((temp_a0 < 0x40) || (temp_a0 >= 0xCC)) {
        if (temp_a0 != 0x126) {
            var_v0 = Pes6Team_GetPlayerId(temp_a0, arg1, 0);
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_v0 = func_00224BC0(arg0, arg1);
    }
    return var_v0 & 0xFFFF;
}
