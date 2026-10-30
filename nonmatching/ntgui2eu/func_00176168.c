/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00176168(void *arg0) {
    s16 temp_a0_2;
    s16 temp_a1_3;
    s16 temp_a2_3;
    s16 temp_a3_2;
    s16 temp_a4;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t9;
    s32 var_a0;
    s32 var_a2;
    s32 var_a4;
    s32 var_a7;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    s64 temp_a0_3;
    s64 temp_v1_3;
    void *temp_a6;
    void *temp_t8;
    void *temp_v1;

    temp_t8 = arg0 + 0x910;
    var_t2 = M2C_FIELD(temp_t8, s32 *, 0x3D0);
    var_t1 = M2C_FIELD(temp_t8, s32 *, 0x3D4);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_t3 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_a2 = (var_t2 + var_t1) * 2;
    temp_v1 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x1D0) + temp_t8;
    temp_a6 = temp_v1 + 0x150;
    var_t0 = M2C_FIELD(temp_t8, s32 *, 0x3D8);
    var_a7 = M2C_FIELD(temp_t8, s32 *, 0x3DC);
    if (temp_t3 < temp_a2) {
        temp_lo = (s32) (var_t1 * temp_t3) / (s32) ((var_t2 + var_t1) * 2);
        var_t2 = (s32) (var_t2 * temp_t3) / temp_a2;
        var_t1 = temp_lo;
    }
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x5B0);
    temp_a1_2 = (var_t0 + var_a7) * 2;
    if (temp_a3 < temp_a1_2) {
        temp_lo_2 = (s32) (var_a7 * temp_a3) / (s32) ((var_t0 + var_a7) * 2);
        var_t0 = (s32) (var_t0 * temp_a3) / temp_a1_2;
        var_a7 = temp_lo_2;
    }
    temp_t9 = (s32) (temp_a3 - ((var_t0 + var_a7) * 2)) >> 1;
    temp_t3_2 = (s32) (temp_t3 - ((var_t2 + var_t1) * 2)) >> 1;
    temp_a0 = (temp_t9 * 2) + var_t0 + var_a7;
    temp_a1_3 = ((M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a1 + var_t2) - var_t1) + (temp_t3 >> 1) + M2C_FIELD(arg0, s32 *, 0x4DC);
    temp_a3_2 = ((M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a1 + var_t0) - var_a7) + (temp_a3 >> 1) + M2C_FIELD(arg0, s32 *, 0x4E0);
    if (temp_a0 > 0) {
        temp_a5 = M2C_FIELD(temp_t8, s32 *, 0x42C);
        temp_a2_2 = M2C_FIELD(temp_t8, s32 *, 0x428);
        temp_lo_3 = (s32) (((temp_t3_2 * 2) + var_t2 + var_t1) * 0x3E8) / temp_a0;
        var_a4 = M2C_FIELD(temp_t8, s32 *, 0x418);
        switch (temp_a5) {                          /* irregular */
        case 2:
        case 0:
            var_a2 = temp_a2_2 * 0x10;
            if (var_a4 >= temp_lo_3) {
                var_v1 = (temp_t3_2 + var_t2) - var_a2;
block_15:
                var_a0 = (s32) (var_v1 * 0x3E8) / var_a4;
            } else {
block_16:
                var_a0 = (temp_t9 + var_t0) - var_a2;
                var_v1 = (s32) (var_a0 * var_a4) / 1000;
            }
            break;
        case 1:
            /* fallthrough */
        default:
            var_a2 = temp_a2_2 * 0x10;
            var_a4 = 0xF4240 / var_a4;
            if (var_a4 >= temp_lo_3) {
                var_v1 = (temp_t3_2 + var_t2) - var_a2;
                goto block_15;
            }
            goto block_16;
        }
        temp_a2_3 = temp_a3_2 + var_a0;
        temp_a4 = temp_a1_3 + var_v1;
        temp_v1_2 = temp_a1_3 - var_v1;
        temp_a0_2 = temp_a3_2 - var_a0;
        if (temp_a5 != 1) {
            if (temp_a5 < 2) {
                if (temp_a5 == 0) {
                    M2C_FIELD(temp_a6, s16 *, 0x30) = temp_v1_2;
                    M2C_FIELD(temp_a6, s16 *, 0x52) = temp_a0_2;
                    M2C_FIELD(temp_a6, s16 *, 0x70) = temp_a4;
                    M2C_FIELD(temp_a6, s16 *, 0x72) = temp_a2_3;
                    M2C_FIELD(temp_a6, s16 *, 0x10) = temp_v1_2;
                    M2C_FIELD(temp_a6, s16 *, 0x12) = temp_a0_2;
                    M2C_FIELD(temp_a6, s16 *, 0x32) = temp_a2_3;
                    M2C_FIELD(temp_a6, s16 *, 0x50) = temp_a4;
                } else {
                    M2C_FIELD(temp_a6, s16 *, 0x70) = temp_v1_2;
                    goto block_30;
                }
            } else if (temp_a5 == 2) {
                M2C_FIELD(temp_a6, s16 *, 0x50) = temp_v1_2;
                M2C_FIELD(temp_a6, s16 *, 0x32) = temp_a0_2;
                M2C_FIELD(temp_a6, s16 *, 0x10) = temp_a4;
                M2C_FIELD(temp_a6, s16 *, 0x12) = temp_a2_3;
                M2C_FIELD(temp_a6, s16 *, 0x70) = temp_v1_2;
                M2C_FIELD(temp_a6, s16 *, 0x72) = temp_a0_2;
                M2C_FIELD(temp_a6, s16 *, 0x52) = temp_a2_3;
                M2C_FIELD(temp_a6, s16 *, 0x30) = temp_a4;
            } else {
                M2C_FIELD(temp_a6, s16 *, 0x70) = temp_v1_2;
block_30:
                M2C_FIELD(temp_a6, s16 *, 0x12) = temp_a0_2;
                M2C_FIELD(temp_a6, s16 *, 0x50) = temp_a4;
                M2C_FIELD(temp_a6, s16 *, 0x52) = temp_a2_3;
                M2C_FIELD(temp_a6, s16 *, 0x30) = temp_v1_2;
                M2C_FIELD(temp_a6, s16 *, 0x32) = temp_a0_2;
                M2C_FIELD(temp_a6, s16 *, 0x72) = temp_a2_3;
                M2C_FIELD(temp_a6, s16 *, 0x10) = temp_a4;
            }
        } else {
            M2C_FIELD(temp_a6, s16 *, 0x10) = temp_v1_2;
            M2C_FIELD(temp_a6, s16 *, 0x72) = temp_a0_2;
            M2C_FIELD(temp_a6, s16 *, 0x30) = temp_a4;
            M2C_FIELD(temp_a6, s16 *, 0x32) = temp_a2_3;
            M2C_FIELD(temp_a6, s16 *, 0x50) = temp_v1_2;
            M2C_FIELD(temp_a6, s16 *, 0x52) = temp_a0_2;
            M2C_FIELD(temp_a6, s16 *, 0x12) = temp_a2_3;
            M2C_FIELD(temp_a6, s16 *, 0x70) = temp_a4;
        }
    } else {
        M2C_FIELD(temp_a6, s16 *, 0x70) = temp_a1_3;
        M2C_FIELD(temp_a6, s16 *, 0x72) = temp_a3_2;
        M2C_FIELD(temp_a6, s16 *, 0x10) = temp_a1_3;
        M2C_FIELD(temp_a6, s16 *, 0x12) = temp_a3_2;
        M2C_FIELD(temp_a6, s16 *, 0x30) = temp_a1_3;
        M2C_FIELD(temp_a6, s16 *, 0x32) = temp_a3_2;
        M2C_FIELD(temp_a6, s16 *, 0x50) = temp_a1_3;
        M2C_FIELD(temp_a6, s16 *, 0x52) = temp_a3_2;
    }
    temp_v1_3 = M2C_FIELD(temp_a6, s64 *, 0x20) & ~0x3FFF;
    M2C_FIELD(temp_a6, s64 *, 0x20) = temp_v1_3;
    M2C_FIELD(temp_v1, s64 *, 0x150) = (s64) (M2C_FIELD(temp_v1, s64 *, 0x150) & ~0x3FFF & 0xC000FFFF);
    M2C_FIELD(temp_a6, s64 *, 0x20) = (s64) ((temp_v1_3 & 0xC000FFFF) | ((((1 << M2C_FIELD(temp_t8, s32 *, 0x414)) * 0x10) & 0x3FF0) << 0x10));
    M2C_FIELD(temp_a6, s64 *, 0x40) = (s64) (((M2C_FIELD(temp_a6, s64 *, 0x40) & ~0x3FFF) | (((1 << M2C_FIELD(temp_t8, s32 *, 0x410)) * 0x10) & 0x3FF0)) & 0xC000FFFF);
    temp_a0_3 = (M2C_FIELD(temp_a6, s64 *, 0x60) & ~0x3FFF) | (((1 << M2C_FIELD(temp_t8, s32 *, 0x410)) * 0x10) & 0x3FF0);
    M2C_FIELD(temp_a6, s64 *, 0x60) = temp_a0_3;
    M2C_FIELD(temp_a6, s64 *, 0x60) = (s64) ((temp_a0_3 & 0xC000FFFF) | ((((1 << M2C_FIELD(temp_t8, s32 *, 0x414)) * 0x10) & 0x3FF0) << 0x10));
}
