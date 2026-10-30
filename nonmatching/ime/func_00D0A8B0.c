/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D08560(s32);                             /* extern */
s32 func_00D132A0(s32, s32);                        /* extern */

s32 func_00D0A8B0(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    temp_v0 = func_00D08560(arg0 + 0x808);
    var_a1 = 5;
    if (arg0 == 0) {

    } else if (temp_v0 < 0) {
        var_a1 = 5;
    } else if (temp_v0 < 0xA) {
        var_a0 = 0;
        do {
            if (temp_v0 == M2C_FIELD((arg0 + (var_a0 * 4)), s32 *, 0x7F4)) {
                var_a1 = var_a0;
            }
            var_a0 += 1;
        } while (var_a0 < 5);
    } else {
        var_a1 = 5;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (var_a1 < 0) {
        return 0;
    }
    if (var_a1 < 5) {
        return func_00D132A0(M2C_FIELD(((var_a1 * 4) + arg0), s32 *, 0x7E0), var_a1);
    }
    return 0;
}
