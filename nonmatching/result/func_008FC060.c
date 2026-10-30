/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C12D40(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */

s32 func_008FC060(void) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_v1;

    temp_a0 = func_00C132C0() & 0xFF;
    var_s0 = 1;
    var_v1 = 1;
    if ((temp_a0 != 0xA) && (temp_a0 != 1)) {
        var_v1 = 0;
    }
    if ((var_v1 == 0) && (func_00C12D40(temp_a0) == 0)) {
        var_s0 = 0;
    }
    return var_s0;
}
