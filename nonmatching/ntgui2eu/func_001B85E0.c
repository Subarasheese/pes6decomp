/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001B8400(s32, s32, s32);                 /* extern */
void *func_001B84D8(s32, void *, M2C_UNK, s32);     /* extern */

void *func_001B85E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_lo;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s8 *var_s0;
    s8 *var_s0_2;
    s8 temp_a3;
    s8 temp_a3_2;
    void *var_a1;

    var_a3 = 1;
    temp_lo = (s32) (arg3 + 8) / 9;
    var_a1_2 = 0;
    if (temp_lo > 1) {
        do {
            var_a3 *= 2;
            var_a1_2 += 1;
        } while (var_a3 < temp_lo);
    }
    var_a1 = func_001B8400(arg0, var_a1_2, var_a3);
    M2C_FIELD(var_a1, s32 *, 0x14) = arg4;
    var_s1 = 9;
    M2C_FIELD(var_a1, s32 *, 0x10) = 1;
    if (arg2 >= 0xA) {
        var_s0 = arg1 + 9;
        do {
            temp_a3 = *var_s0;
            var_s0 += 1;
            var_s1 += 1;
            var_a1 = func_001B84D8(arg0, var_a1, 0xA, temp_a3 - 0x30);
        } while (var_s1 < arg2);
        var_s0_2 = var_s0 + 1;
    } else {
        var_s0_2 = arg1 + 0xA;
    }
    if (var_s1 < arg3) {
        var_s1_2 = arg3 - var_s1;
        do {
            temp_a3_2 = *var_s0_2;
            var_s0_2 += 1;
            var_s1_2 -= 1;
            var_a1 = func_001B84D8(arg0, var_a1, 0xA, temp_a3_2 - 0x30);
        } while (var_s1_2 != 0);
    }
    return var_a1;
}
