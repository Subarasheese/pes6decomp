/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002EDE60(s32);
s32 func_00BA4920(s32 arg0) {
    s32 temp_s1;
    s32 var_v0;
    s32 var_v1;

    temp_s1 = func_002EDE60(0) & 0xFF;
    var_v1 = 0x64 - ((func_002EDE60(1) & 0xFF) + (temp_s1 * 2));
    if (arg0 == 0) {
        var_v0 = var_v1 >> 1;
        if (var_v1 < 0) {
            return (s32) (var_v1 + 1) >> 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    if (arg0 == 1) {

    } else {
        var_v1 = 0;
    }
    var_v0 = var_v1;
    return var_v0;
}
