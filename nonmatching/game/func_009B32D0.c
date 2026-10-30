/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B32D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;

    var_a0 = arg0;
    temp_a4 = arg1 & 0xFFFF;
    temp_a1 = (((var_a0 & 0xFFFF) - temp_a4) + 0x10000) & 0xFFFF;
    if (temp_a1 >= 0x8000) {
        temp_v1 = arg2 & 0xFFFF;
        if (temp_v1 < (0x10000 - temp_a1)) {
            var_a0 = ((temp_a4 - temp_v1) + 0x10000) & 0xFFFF;
        }
        return var_a0;
    }
    temp_v0 = arg2 & 0xFFFF;
    if (temp_v0 < temp_a1) {
        var_a0 = (temp_a4 + temp_v0) & 0xFFFF;
    }
    return var_a0;
}
