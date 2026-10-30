/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D07530(s32, s32);                    /* extern */
s64 func_00D07590(s32);                             /* extern */

s32 func_00D082D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;
    s32 var_s0;

    if (arg0 == 0) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 0xA) {
        var_s0 = 0;
        do {
            temp_s4 = arg0 + (var_s0 * 0x74) + 0x18;
            if (arg1 == ((s64) (func_00D07590(temp_s4) << 0x38) >> 0x38)) {
                func_00D07530(temp_s4, arg2);
            }
            var_s0 += 1;
        } while (var_s0 < 0xA);
        return 1;
    }
    return 0;
}
