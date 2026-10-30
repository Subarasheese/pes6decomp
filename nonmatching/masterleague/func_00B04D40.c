/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
s32 func_00984740(s32);                             /* extern */

s32 func_00B04D40(s32 arg0) {
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0x39;
loop_1:
    var_s1 = 0;
loop_2:
    if ((arg0 & 0xFFFF) != (Pes6Team_GetPlayerId(var_s2, var_s1 & 0xFF, 0) & 0xFFFF)) {
        var_s1 += 1;
        if (var_s1 >= 0x17) {
            var_s2 = (var_s2 + 1) & 0xFFFF;
            if (var_s2 >= 0x40) {
                var_a0 = 0xFFFF & 0xFFFF;
            } else {
                goto loop_1;
            }
        } else {
            goto loop_2;
        }
    } else {
        var_a0 = var_s2 & 0xFFFF;
    }
    if ((var_a0 & 0xFFFF) == 0xFFFF) {
        return 1;
    }
    return func_00984740(var_a0) == 1;
}
