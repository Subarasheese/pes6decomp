/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B8CF0(void *, void *, s32, s32, u32, u32, void *, u32 *); /* extern */

u32 func_001B6EA8(void *arg0, void *arg1, s32 arg2, s32 arg3, u32 arg4) {
    s16 temp_a1;
    s16 temp_a1_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 *temp_a5;
    s32 *temp_s3;
    s32 *var_a5_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_t0;
    s32 var_t0_2;
    u32 *temp_s6;
    u32 *var_a5;
    u32 *var_a7;
    u32 *var_a7_2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a1_2;
    u32 temp_a2;
    u32 temp_a4;
    u32 temp_lo;
    u32 temp_t1;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 var_a4;
    u32 var_s2;
    u32 var_v0;
    u32 var_v1;
    u32 var_v1_2;
    void *temp_s1;
    void *var_a6;
    void *var_a6_2;

    var_a2 = arg2;
    var_a3 = arg3;
    var_a4 = arg4;
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x10);
    var_v0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) >= temp_s0) {
        var_s0 = temp_s0 - 1;
        var_a7 = arg1 + 0x14;
        temp_v0 = var_s0 * 4;
        temp_s1 = arg0 + 0x14;
        temp_s3 = var_a7 + temp_v0;
        var_a5 = temp_s1 + temp_v0;
        temp_s6 = var_a7;
        temp_t1 = *var_a5;
        var_a6 = temp_s1;
        temp_lo = temp_t1 / (u32) (*temp_s3 + 1);
        var_s2 = temp_lo;
        var_t0 = 0;
        if (var_s2 != 0) {
            var_v1 = 0;
            do {
                temp_a0 = *var_a7;
                var_a7 += 4;
                temp_a2 = M2C_FIELD(var_a6, u32 *, 0);
                var_a3 = (u32) temp_s3 < (u32) var_a7;
                temp_v0_2 = ((temp_a0 & 0xFFFF) * var_s2) + var_v1;
                var_a4 = ((temp_a0 >> 0x10) * var_s2) + (temp_v0_2 >> 0x10);
                temp_v1 = ((temp_a2 & 0xFFFF) - (temp_v0_2 & 0xFFFF)) + var_t0;
                var_a2 = (temp_a2 >> 0x10) - (var_a4 & 0xFFFF);
                M2C_FIELD(var_a6, u32 *, 0) = temp_v1;
                temp_a1 = var_a2 + (temp_v1 >> 0x10);
                var_v1 = var_a4 >> 0x10;
                M2C_FIELD(var_a6, s16 *, 2) = temp_a1;
                var_a6 += 4;
                var_t0 = temp_a1 >> 0x10;
            } while (var_a3 == 0);
            if (temp_t1 == 0) {
                var_a5 -= 4;
loop_9:
                if (((u32) temp_s1 < (u32) var_a5) && (*var_a5 == 0)) {
                    var_a5 -= 4;
                    var_s0 -= 1;
                    goto loop_9;
                }
                M2C_FIELD(arg0, s32 *, 0x10) = var_s0;
            }
        }
        var_a7_2 = temp_s6;
        if (func_001B8CF0(arg0, arg1, var_a2, var_a3, var_a4, (u32) var_a5, var_a6, var_a7) >= 0) {
            var_s2 = temp_lo + 1;
            var_t0_2 = 0;
            var_v1_2 = 0;
            var_a6_2 = temp_s1;
            do {
                temp_a0_2 = *var_a7_2;
                var_a7_2 += 4;
                temp_a1_2 = M2C_FIELD(var_a6_2, u32 *, 0);
                temp_v0_3 = (temp_a0_2 & 0xFFFF) + var_v1_2;
                temp_a4 = (temp_a0_2 >> 0x10) + (temp_v0_3 >> 0x10);
                temp_v1_2 = ((temp_a1_2 & 0xFFFF) - (temp_v0_3 & 0xFFFF)) + var_t0_2;
                M2C_FIELD(var_a6_2, u32 *, 0) = temp_v1_2;
                temp_a1_3 = ((temp_a1_2 >> 0x10) - (temp_a4 & 0xFFFF)) + (temp_v1_2 >> 0x10);
                var_v1_2 = temp_a4 >> 0x10;
                M2C_FIELD(var_a6_2, s16 *, 2) = temp_a1_3;
                var_a6_2 += 4;
                var_t0_2 = temp_a1_3 >> 0x10;
            } while ((u32) temp_s3 >= (u32) var_a7_2);
            temp_a5 = temp_s1 + (var_s0 * 4);
            var_v0 = var_s2;
            if (*temp_a5 == 0) {
                var_a5_2 = temp_a5 - 4;
loop_19:
                if ((u32) temp_s1 < (u32) var_a5_2) {
                    if (*var_a5_2 == 0) {
                        var_a5_2 -= 4;
                        var_s0 -= 1;
                        goto loop_19;
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x10) = var_s0;
                goto block_24;
            }
        } else {
block_24:
            var_v0 = var_s2;
        }
    }
    return var_v0;
}
