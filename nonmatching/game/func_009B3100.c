/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3100(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a4;
    s32 temp_v1;
    s32 var_a1;

    var_a1 = arg1;
    temp_a4 = var_a1 & 0xFFFF;
    temp_v1 = (((arg0 & 0xFFFF) - temp_a4) + 0x10000) & 0xFFFF;
    if (temp_v1 >= 0x8000) {
        if ((arg3 & 0xFFFF) < (0x10000 - temp_v1)) {
            var_a1 = ((temp_a4 - (arg2 & 0xFFFF)) + 0x10000) & 0xFFFF;
        }
        return var_a1;
    }
    if ((arg3 & 0xFFFF) < temp_v1) {
        var_a1 = (temp_a4 + (arg2 & 0xFFFF)) & 0xFFFF;
    }
    return var_a1;
}
