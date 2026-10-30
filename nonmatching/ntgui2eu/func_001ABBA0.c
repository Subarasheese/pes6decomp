/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_001ABBA0(u8 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_a4;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_a4 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        temp_v0 = (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
        var_a4 |= temp_v0;
    } while (temp_a2 & 0x80);
    if ((var_a3 < 0x20U) && (temp_a2 & 0x40)) {
        var_a4 |= -1 << var_a3;
    }
    *arg1 = var_a4;
    return var_a0;
}
