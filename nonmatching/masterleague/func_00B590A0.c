/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B52C70(s32, M2C_UNK);                    /* extern */
s32 func_00B52F80(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_00B54300();                                /* extern */
s32 func_00B56910(s32);                             /* extern */

s32 func_00B590A0(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = func_00B54300() & 0xFF;
    if (func_00B52C70(temp_s0, 3) != 0) {
        if (func_00B52F80(temp_s0, 3, 1) != 0) {
            var_v0 = 1;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return ((s64) ((func_00B56910(arg0) & 0xFF) << 0x38) >> 0x38) == 1;
    }
    return 0;
}
