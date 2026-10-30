/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00B1CBB0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_a1 = 0;
loop_5:
        if ((arg1 & 0xFF) != M2C_FIELD((temp_v0 + var_a1), u8 *, 0x4A6)) {
            var_a1 += 1;
            if (var_a1 >= 0xB) {
                return 1;
            }
            goto loop_5;
        }
        return 0;
    }
    return 0;
}
