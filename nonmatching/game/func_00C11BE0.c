/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10(s32, s32);                        /* extern */

s32 func_00C11BE0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s1;
    s32 var_v1;

    var_s1 = arg1;
    var_v1 = func_00C17E10(var_s1, arg2) & 0xFF;
    if (((var_s1 & 0xFF) >= 2) || ((var_v1 & 0xFF) >= 0x12)) {
        var_v1 = 0;
        var_s1 = 0 & 0xFF;
    }
    return arg0 + ((var_s1 & 0xFF) * 0xD80) + ((var_v1 & 0xFF) * 0x30) + 0x4DC;
}
