/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00161B40(u8 **arg0) {
    s32 temp_a1;
    s32 var_a3;
    u8 *temp_a2;
    u8 *var_a2;
    u8 temp_v1;
    u8 var_a1;

    temp_a2 = *arg0;
    temp_v1 = *temp_a2;
    var_a2 = temp_a2 + 1;
    if (!(temp_v1 & 0x80)) {
        var_a1 = temp_v1;
    } else {
        var_a1 = -1U;
        if ((u32) ((temp_v1 + 0x3E) & 0xFF) < 0x33U) {
            var_a1 = temp_v1 & 0x7F;
            var_a3 = 0x40;
            do {
                temp_a1 = var_a1 & (var_a3 - 1);
                var_a3 <<= 5;
                var_a1 = (temp_a1 << 6) | (*var_a2 & 0x3F);
                var_a2 += 1;
            } while ((s32) var_a1 >= var_a3);
        }
    }
    *arg0 = var_a2;
    return (s32) var_a1;
}
