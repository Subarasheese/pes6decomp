/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00157080(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6) {
    s32 temp_a0;
    s32 temp_a5_2;
    s32 temp_a6;
    s32 temp_t0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a5;
    u32 temp_t0;
    void *temp_a7;
    void *temp_a7_2;
    void *temp_a7_3;
    void *temp_a7_4;
    void *temp_a7_5;
    void *var_v0;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0) | (M2C_FIELD(arg0, u8 *, 3) << 0x18) | ((M2C_FIELD(arg0, u8 *, 2) << 0x10) | (M2C_FIELD(arg0, u8 *, 1) << 8));
    temp_a7 = arg0 + 4;
    if ((temp_a0 == 0x64732E) || (var_v0 = NULL, (temp_a0 == 0x646E732E))) {
        var_v0 = NULL;
        temp_t0 = M2C_FIELD(arg0, u8 *, 4) | (M2C_FIELD(temp_a7, u8 *, 3) << 0x18) | ((M2C_FIELD(temp_a7, u8 *, 2) << 0x10) | (M2C_FIELD(temp_a7, u8 *, 1) << 8));
        temp_t0_2 = (temp_t0 >> 0x18) | (temp_t0 << 0x18) | (((temp_t0 << 8) & 0xFF0000) | ((temp_t0 >> 8) & 0xFF00));
        temp_a7_2 = temp_a7 + 4;
        if (arg1 >= temp_t0_2) {
            temp_a7_3 = temp_a7_2 + 4;
            temp_a7_4 = temp_a7_3 + 4;
            temp_a0_2 = M2C_FIELD(temp_a7_2, u8 *, 4) | (M2C_FIELD(temp_a7_3, u8 *, 3) << 0x18) | ((M2C_FIELD(temp_a7_3, u8 *, 2) << 0x10) | (M2C_FIELD(temp_a7_3, u8 *, 1) << 8));
            temp_a5 = M2C_FIELD(temp_a7, u8 *, 4) | (M2C_FIELD(temp_a7_2, u8 *, 3) << 0x18) | ((M2C_FIELD(temp_a7_2, u8 *, 2) << 0x10) | (M2C_FIELD(temp_a7_2, u8 *, 1) << 8));
            temp_a0_3 = (temp_a0_2 >> 0x18) | (temp_a0_2 << 0x18) | (((temp_a0_2 << 8) & 0xFF0000) | ((temp_a0_2 >> 8) & 0xFF00));
            temp_a5_2 = (temp_a5 >> 0x18) | (temp_a5 << 0x18) | (((temp_a5 << 8) & 0xFF0000) | ((temp_a5 >> 8) & 0xFF00));
            if (temp_a0_3 != 2) {
                if (temp_a0_3 < 3U) {
                    if (temp_a0_3 != 1) {
                        return NULL;
                    }
                    var_v0_2 = 8;
                    *arg6 = 2;
                    goto block_14;
                }
                if (temp_a0_3 != 3) {
                    return NULL;
                }
                var_v0_2 = 0x10;
                *arg6 = 0;
block_14:
                *arg4 = var_v0_2;
                goto block_15;
            }
            *arg6 = 1;
            *arg4 = 8;
block_15:
            temp_a7_5 = temp_a7_4 + 4;
            temp_v0 = M2C_FIELD(temp_a7_3, u8 *, 4) | (M2C_FIELD(temp_a7_4, u8 *, 3) << 0x18) | ((M2C_FIELD(temp_a7_4, u8 *, 2) << 0x10) | (M2C_FIELD(temp_a7_4, u8 *, 1) << 8));
            *arg2 = ((u32) temp_v0 >> 0x18) | (temp_v0 << 0x18) | (((temp_v0 << 8) & 0xFF0000) | ((temp_v0 >> 8) & 0xFF00));
            temp_v0_2 = M2C_FIELD(temp_a7_4, u8 *, 4) | (M2C_FIELD(temp_a7_5, u8 *, 3) << 0x18) | ((M2C_FIELD(temp_a7_5, u8 *, 2) << 0x10) | (M2C_FIELD(temp_a7_5, u8 *, 1) << 8));
            temp_v1 = ((u32) temp_v0_2 >> 0x18) | (temp_v0_2 << 0x18) | (((temp_v0_2 << 8) & 0xFF0000) | ((temp_v0_2 >> 8) & 0xFF00));
            *arg3 = temp_v1;
            temp_a6 = *arg6;
            if (temp_a6 == 2) {
                var_v0_3 = temp_a5_2 / temp_v1;
            } else if (temp_a6 == 1) {
                var_v0_3 = temp_a5_2 / temp_v1;
            } else {
                var_v0_3 = 0x7FFF0000;
                if (temp_a6 == 0) {
                    var_v0_3 = (s32) ((s32) (temp_a5_2 + ((u32) temp_a5_2 >> 0x1F)) >> 1) / temp_v1;
                }
            }
            *arg5 = var_v0_3;
            var_v0 = arg0 + temp_t0_2;
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
