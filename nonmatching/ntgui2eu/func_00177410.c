/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177658(void *);
void func_00177410(void *arg0) {
    s16 temp_a1_2;
    s16 temp_a2_2;
    s16 temp_a5;
    s16 temp_a6;
    s16 temp_v1;
    s16 var_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a5_2;
    s32 temp_a6_2;
    s32 temp_a7;
    s32 temp_lo;
    s32 temp_t1;
    s32 temp_t3;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;
    void *temp_a4;
    void *temp_t0;

    temp_t0 = arg0 + 0x910;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_t3 = (s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1;
    var_a0 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a3;
    temp_a2 = (s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1;
    temp_a7 = temp_a2 * 2;
    temp_a4 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x170) + temp_t0 + 0x320;
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a3 + temp_t3 + M2C_FIELD(arg0, s32 *, 0x4DC);
    temp_a6 = var_a0 + temp_a2 + M2C_FIELD(arg0, s32 *, 0x4E0);
    if (temp_a7 > 0) {
        temp_t1 = M2C_FIELD(temp_t0, s32 *, 0x594);
        var_a3 = M2C_FIELD(temp_t0, s32 *, 0x570);
        temp_a5_2 = temp_a5 + M2C_FIELD(temp_t0, s32 *, 0x58C);
        temp_a1 = M2C_FIELD(temp_t0, s32 *, 0x588);
        temp_lo = (s32) (temp_t3 * 0x7D0) / temp_a7;
        temp_a6_2 = temp_a6 + M2C_FIELD(temp_t0, s32 *, 0x590);
        switch (temp_t1) {                          /* irregular */
        case 2:
        case 0:
            var_a1 = temp_a1 * 0x10;
            if (var_a3 >= temp_lo) {
                var_v1 = temp_t3 - var_a1;
                var_v0 = var_v1 * 0x3E8;
block_11:
                var_a0_2 = var_v0 / var_a3;
            } else {
block_12:
                var_a0_2 = temp_a2 - var_a1;
                var_v1 = (s32) (var_a0_2 * var_a3) / 1000;
            }
            break;
        case 1:
            /* fallthrough */
        default:
            var_a1 = temp_a1 * 0x10;
            var_a3 = 0xF4240 / var_a3;
            if (var_a3 >= temp_lo) {
                var_v1 = temp_t3 - var_a1;
                var_v0 = var_v1 * 0x3E8;
                goto block_11;
            }
            goto block_12;
        }
        temp_a1_2 = temp_a6_2 + var_a0_2;
        temp_a2_2 = temp_a5_2 + var_v1;
        temp_v1 = temp_a5_2 - var_v1;
        var_a0 = temp_a6_2 - var_a0_2;
        if (temp_t1 != 1) {
            if (temp_t1 < 2) {
                if (temp_t1 == 0) {
                    M2C_FIELD(temp_a4, s16 *, 0xB2) = temp_a1_2;
                    M2C_FIELD(temp_a4, s16 *, 0x50) = temp_v1;
                    M2C_FIELD(temp_a4, s16 *, 0x82) = var_a0;
                    M2C_FIELD(temp_a4, s16 *, 0xB0) = temp_a2_2;
                    M2C_FIELD(temp_a4, s16 *, 0x20) = temp_v1;
                    M2C_FIELD(temp_a4, s16 *, 0x22) = var_a0;
                    M2C_FIELD(temp_a4, s16 *, 0x52) = temp_a1_2;
                    M2C_FIELD(temp_a4, s16 *, 0x80) = temp_a2_2;
                } else {
                    M2C_FIELD(temp_a4, s16 *, 0x82) = temp_a1_2;
                    goto block_26;
                }
            } else if (temp_t1 == 2) {
                M2C_FIELD(temp_a4, s16 *, 0x22) = temp_a1_2;
                M2C_FIELD(temp_a4, s16 *, 0x80) = temp_v1;
                M2C_FIELD(temp_a4, s16 *, 0x52) = var_a0;
                M2C_FIELD(temp_a4, s16 *, 0x20) = temp_a2_2;
                M2C_FIELD(temp_a4, s16 *, 0xB0) = temp_v1;
                M2C_FIELD(temp_a4, s16 *, 0xB2) = var_a0;
                M2C_FIELD(temp_a4, s16 *, 0x82) = temp_a1_2;
                M2C_FIELD(temp_a4, s16 *, 0x50) = temp_a2_2;
            } else {
                M2C_FIELD(temp_a4, s16 *, 0x82) = temp_a1_2;
block_26:
                M2C_FIELD(temp_a4, s16 *, 0xB0) = temp_v1;
                M2C_FIELD(temp_a4, s16 *, 0x22) = var_a0;
                M2C_FIELD(temp_a4, s16 *, 0x80) = temp_a2_2;
                M2C_FIELD(temp_a4, s16 *, 0x50) = temp_v1;
                M2C_FIELD(temp_a4, s16 *, 0x52) = var_a0;
                M2C_FIELD(temp_a4, s16 *, 0xB2) = temp_a1_2;
                M2C_FIELD(temp_a4, s16 *, 0x20) = temp_a2_2;
            }
        } else {
            M2C_FIELD(temp_a4, s16 *, 0x52) = temp_a1_2;
            M2C_FIELD(temp_a4, s16 *, 0x20) = temp_v1;
            M2C_FIELD(temp_a4, s16 *, 0xB2) = var_a0;
            M2C_FIELD(temp_a4, s16 *, 0x50) = temp_a2_2;
            M2C_FIELD(temp_a4, s16 *, 0x80) = temp_v1;
            M2C_FIELD(temp_a4, s16 *, 0x82) = var_a0;
            M2C_FIELD(temp_a4, s16 *, 0x22) = temp_a1_2;
            M2C_FIELD(temp_a4, s16 *, 0xB0) = temp_a2_2;
        }
    } else {
        M2C_FIELD(temp_a4, s16 *, 0xB2) = temp_a6;
        M2C_FIELD(temp_a4, s16 *, 0xB0) = temp_a5;
        M2C_FIELD(temp_a4, s16 *, 0x20) = temp_a5;
        M2C_FIELD(temp_a4, s16 *, 0x22) = temp_a6;
        M2C_FIELD(temp_a4, s16 *, 0x50) = temp_a5;
        M2C_FIELD(temp_a4, s16 *, 0x52) = temp_a6;
        M2C_FIELD(temp_a4, s16 *, 0x80) = temp_a5;
        M2C_FIELD(temp_a4, s16 *, 0x82) = temp_a6;
    }
    func_00177658((void *) var_a0);
}
