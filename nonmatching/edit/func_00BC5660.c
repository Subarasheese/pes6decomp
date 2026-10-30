/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_00221500(s32);                         /* extern */

void func_00BC5660(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    var_s0 = arg2 & 0xFF;
    if ((temp_v1 >= 0x40) && (temp_v1 < 0xCC)) {
        var_v0 = 3;
    } else if (temp_v1 != 0x126) {
        if ((temp_v1 >= 0xDD) && (temp_v1 < 0xFE)) {
            var_v0 = 3;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 3;
    }
    if ((func_0017A670(0) == 6) && ((var_v0 == 3) == 1)) {
        if (var_s0 != 1) {
            var_s0 = 1;
        } else {
            var_s0 = 2;
        }
    }
    func_00221500(Pes6Team_GetPlayerId(arg0, arg1, var_s0) & 0xFFFF);
}
