/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B0444();                                /* extern */

s32 func_00153ED8(s8 *arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_s0;
    s8 *var_a0;
    s8 temp_v0_2;

    var_s0 = 0;
    temp_v0 = func_001B0444();
    if (temp_v0 > 0) {
        var_a0 = arg0;
        var_a1 = temp_v0;
        do {
            temp_v0_2 = *var_a0;
            var_a0 += 1;
            var_a1 -= 1;
            var_s0 = var_s0 + 0xBC8A19 + (temp_v0_2 * 0x3039);
        } while (var_a1 != 0);
    }
    return var_s0;
}
