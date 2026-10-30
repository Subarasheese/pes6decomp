/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0023F240(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_v1 = arg0 & 0xFFFF;
    if (!(temp_v1 & 0x80)) {
        if (!(temp_v1 & 0x20)) {
            if ((temp_v1 & 0x40) || (temp_v1 & 0x10)) {
                if (var_a3 != 1) {
                    if (var_a2 < var_a1) {
                        var_a3 = var_a1 - 1;
                    }
                    goto block_25;
                }
                if (var_a1 != var_a2) {
                    if (var_a2 < var_a1) {
                        var_a3 = var_a1 - 1;
                    }
block_25:
                    var_a1 = var_a3;
                }
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (var_a3 != 1) {
            if (var_a1 < var_a3) {
                var_a2 = var_a1 + 1;
            }
            var_a1 = var_a2;
        } else if (var_a1 != var_a3) {
            if (var_a1 < var_a3) {
                var_a2 = var_a1 + 1;
            }
            var_a1 = var_a2;
        }
    }
    return var_a1;
}
