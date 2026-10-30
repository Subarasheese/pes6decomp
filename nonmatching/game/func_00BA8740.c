/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00B2A420(s32);                           /* extern */

s32 func_00BA8740(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        if (M2C_FIELD(M2C_FIELD(func_00B2A420(var_s1 + 1), void **, 4), u8 *, 0x4C) == arg0) {
            var_s0 += 1;
        }
        var_s1 += 1;
    } while (var_s1 < 0x16);
    return var_s0;
}
