/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_00994C60(s32, s32);                        /* extern */
s32 func_00B03CE0(s32);                             /* extern */

s32 func_00B2B2C0(s32 arg0) {
    s32 var_s1;
    s32 var_s2;
    u8 *temp_v0;

    var_s2 = 0;
    var_s1 = 0;
    do {
        temp_v0 = func_00994C60(arg0 & 0xFF, var_s2 & 0xFF);
        if ((temp_v0 != NULL) && (((u64) ((s64) *temp_v0 << 0x39) >> 0x3A) == 9)) {
            var_s1 = (var_s1 + 1) & 0xFF;
        }
        var_s2 = (var_s2 + 1) & 0xFF;
    } while (var_s2 < 0x20);
    return ((func_00B03CE0(arg0) & 0xFF) - (var_s1 & 0xFF)) >= 0x15;
}
