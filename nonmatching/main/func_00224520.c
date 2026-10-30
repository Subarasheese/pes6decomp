/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_002260F0();                                /* extern */

s32 func_00224520(M2C_UNK arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s0;

    temp_s0 = func_002260F0();
    if (func_00231240() == 1) {
        var_s0 = 0;
    } else if (temp_s0 != 0) {
        temp_v1 = arg1 & 0xFF;
        if (temp_v1 < 0x20) {
            var_s0 = temp_s0 + (temp_v1 * 0x16) + 0x1E4;
        } else {
            var_s0 = 0;
        }
    } else {
        var_s0 = 0;
    }
    if (func_00231240() == 1) {
        return 0;
    }
    if (var_s0 != 0) {
        return var_s0 + 0xC;
    }
    return 0;
}
