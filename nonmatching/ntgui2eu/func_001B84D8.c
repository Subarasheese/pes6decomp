/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B84A8(void *, void *);
M2C_UNK func_001AE624(s32, void *, s32);            /* extern */
void *func_001B8400(void *, s32, s32, u32 *, s32, s32); /* extern */

void *func_001B84D8(void *arg0, void *arg1, s32 arg2, u32 arg3) {
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a5;
    s32 var_v0_2;
    u32 *var_a3;
    u32 temp_a0;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_s3;
    void *temp_a1;
    void *temp_v0_2;
    void *var_s1;
    void *var_v0;

    var_s1 = arg1;
    var_s3 = arg3;
    var_a3 = var_s1 + 0x14;
    var_a5 = 0;
    temp_s2 = M2C_FIELD(var_s1, s32 *, 0x10);
    do {
        temp_v1 = *var_a3;
        var_a5 += 1;
        temp_a2 = var_a5 < temp_s2;
        temp_a0 = ((temp_v1 & 0xFFFF) * arg2) + var_s3;
        temp_a0_2 = temp_a0 & 0xFFFF;
        temp_v1_2 = ((temp_v1 >> 0x10) * arg2) + (temp_a0 >> 0x10);
        temp_v0 = temp_v1_2 << 0x10;
        var_s3 = temp_v1_2 >> 0x10;
        *var_a3 = temp_v0 + temp_a0_2;
        var_a3 += 4;
    } while (temp_a2 != 0);
    var_v0 = var_s1;
    if (var_s3 != 0) {
        var_v0_2 = temp_s2 * 4;
        if (temp_s2 >= M2C_FIELD(var_s1, s32 *, 8)) {
            temp_v0_2 = func_001B8400(arg0, M2C_FIELD(var_s1, s32 *, 4) + 1, temp_a2, var_a3, arg2, var_a5);
            func_001AE624(temp_v0_2 + 0xC, var_s1 + 0xC, (M2C_FIELD(var_s1, s32 *, 0x10) * 4) + 8);
            temp_a1 = var_s1;
            var_s1 = temp_v0_2;
            func_001B84A8(arg0, temp_a1);
            var_v0_2 = temp_s2 * 4;
        }
        M2C_FIELD((var_v0_2 + var_s1), u32 *, 0x14) = var_s3;
        M2C_FIELD(var_s1, s32 *, 0x10) = (s32) (temp_s2 + 1);
        var_v0 = var_s1;
    }
    return var_v0;
}
