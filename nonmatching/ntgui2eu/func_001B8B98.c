/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B84A8(void *, void *);
void *func_001B8400(void *, s32, s32);              /* extern */

void *func_001B8B98(void *arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s2;
    u32 *var_a0;
    u32 *var_a3;
    u32 temp_v0_2;
    u32 temp_v1;
    u32 var_v1;
    void *temp_a2;
    void *temp_v0;

    temp_s1 = arg2 >> 5;
    var_a2 = M2C_FIELD(arg1, s32 *, 8);
    var_s2 = temp_s1 + M2C_FIELD(arg1, s32 *, 0x10) + 1;
    var_a1 = M2C_FIELD(arg1, s32 *, 4);
    if (var_a2 < var_s2) {
        do {
            var_a2 *= 2;
            var_a1 += 1;
        } while (var_a2 < var_s2);
    }
    temp_v0 = func_001B8400(arg0, var_a1, var_a2);
    var_a3 = temp_v0 + 0x14;
    if (temp_s1 > 0) {
        var_a2_2 = temp_s1;
        do {
            var_a2_2 -= 1;
            *var_a3 = 0;
            var_a3 += 4;
        } while (var_a2_2 != 0);
    }
    var_a0 = arg1 + 0x14;
    temp_s0 = arg2 & 0x1F;
    temp_a2 = var_a0 + (M2C_FIELD(arg1, s32 *, 0x10) * 4);
    if (temp_s0 != 0) {
        var_v1 = 0;
        do {
            *var_a3 = (*var_a0 << temp_s0) | var_v1;
            var_a3 += 4;
            temp_v1 = *var_a0;
            var_a0 += 4;
            var_v1 = temp_v1 >> (0x20 - temp_s0);
        } while ((u32) var_a0 < (u32) temp_a2);
        *var_a3 = var_v1;
        if (var_v1 != 0) {
            var_s2 += 1;
        }
    } else {
        do {
            temp_v0_2 = *var_a0;
            var_a0 += 4;
            *var_a3 = temp_v0_2;
            var_a3 += 4;
        } while ((u32) var_a0 < (u32) temp_a2);
    }
    M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) (var_s2 - 1);
    func_001B84A8(arg0, arg1);
    return temp_v0;
}
