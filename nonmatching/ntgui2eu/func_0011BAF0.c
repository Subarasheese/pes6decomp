/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3694[];

u32 func_0011BAF0(u8 **arg0) {
    s32 temp_a1;
    u32 var_a2;
    u8 *temp_a3;
    u8 *var_a3;
    u8 temp_v1;
    u8 var_a1;

    temp_a3 = *arg0;
    temp_v1 = *temp_a3;
    var_a3 = temp_a3 + 1;
    if (!(temp_v1 & 0x80)) {
        var_a1 = temp_v1;
    } else {
        var_a1 = temp_v1 & 0x7F;
        if ((u32) ((temp_v1 + 0x3E) & 0xFF) >= 0x33U) {
            var_a1 = (u8) (*(u32 *)D_005B3694);
        } else {
            var_a2 = 0x40;
            do {
                temp_a1 = var_a1 & (var_a2 - 1);
                var_a2 <<= 5;
                var_a1 = (temp_a1 << 6) | (*var_a3 & 0x3F);
                var_a3 += 1;
            } while (var_a1 >= var_a2);
        }
    }
    *arg0 = var_a3;
    return (u32) var_a1;
}
