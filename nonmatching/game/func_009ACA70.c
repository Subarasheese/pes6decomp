/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009ACA70(s64 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;

    var_v0 = 0;
    if (((s64) (arg0 << 0x38) >> 0x38) == 1) {
        temp_a0 = arg1 & 0xFF;
        if (temp_a0 & 4) {
            var_v0 = 2;
        }
        if (temp_a0 & 8) {
            var_v0 = 4;
        }
        if (temp_a0 & 0x10) {
            var_v0 = 3;
        }
        if (temp_a0 & 2) {
            return 5;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_a0_2 = arg1 & 0xFF;
    if (temp_a0_2 & 4) {
        var_v0 = 1;
    }
    if (temp_a0_2 & 8) {
        var_v0 = 3;
    }
    if (temp_a0_2 & 0x10) {
        var_v0 = 4;
    }
    if (temp_a0_2 & 2) {
        var_v0 = 6;
    }
    return var_v0;
}
