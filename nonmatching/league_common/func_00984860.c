/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00230410();                                /* extern */

void func_00984860(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        if (((var_s0 & 0xFF) < 0x50) && (func_00230410() != 0)) {
            temp_v0 = func_002260F0(var_s0);
            if (temp_v0 != 0) {
                M2C_FIELD(temp_v0, s8 *, 0x38) = 0;
            }
        }
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 0x50);
}
