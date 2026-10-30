/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00835EE0();                                /* extern */

s32 func_00835E50(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a0;

    temp_s0 = func_00835EE0();
    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_a0 = temp_v0 + 0x12230;
    } else {
        var_a0 = 0;
    }
    if (var_a0 == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < temp_s0) {
        return var_a0 + (arg0 * 0xC8);
    }
    return 0;
}
