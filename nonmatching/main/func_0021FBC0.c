/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223AC0(void);
extern s32 func_00223960(u16);
s32 func_0021FBC0(u16 arg0) {
    s32 temp_v1;
    s32 var_v0;
    u16 var_s0;

    var_s0 = arg0;
    temp_v1 = var_s0 & 0xFFFF;
    var_v0 = 0;
    if ((temp_v1 >= 0) && (temp_v1 < 0xCC)) {
        var_v0 = func_00223AC0();
    } else if ((u32) (temp_v1 - 0x126) < 2U) {
        var_v0 = func_00223960(var_s0) + 4;
        var_s0 = 0;
    }
    if (var_v0 != 0) {
        var_v0 += (var_s0 & 0xFFFF) * 0x16C;
    }
    return var_v0;
}
