/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00161BB0(u8 **arg0, u8 arg1) {
    s32 var_a2;
    s32 var_v1;
    u32 temp_v1;
    u8 *temp_a3;
    u8 *var_a0;
    u8 *var_a3;
    u8 temp_v0;
    u8 var_a1;

    var_a1 = arg1;
    temp_a3 = *arg0;
    if (var_a1 < 0x80U) {
        *temp_a3 = var_a1;
        var_a3 = temp_a3 + 1;
    } else {
        var_v1 = 0x800;
        var_a2 = 1;
        if ((s32) var_a1 >= 0x800) {
            do {
                var_v1 <<= 5;
                var_a2 += 1;
            } while ((s32) var_a1 >= var_v1);
        }
        var_a3 = temp_a3 + (var_a2 + 1);
        var_a0 = var_a3;
        temp_v1 = ((1 << (7 - var_a2)) - 1) & 0xFF;
loop_8:
        var_a2 -= 1;
        if (var_a2 != -1) {
            var_a0 -= 1;
            temp_v0 = (var_a1 & 0x3F) | 0x80;
            var_a1 = (u8) ((s32) var_a1 >> 6);
            *var_a0 = temp_v0;
            goto loop_8;
        }
        M2C_FIELD(var_a0, s8 *, -1) = (s8) (~temp_v1 | (var_a1 & (temp_v1 >> 1)));
    }
    *arg0 = var_a3;
}
