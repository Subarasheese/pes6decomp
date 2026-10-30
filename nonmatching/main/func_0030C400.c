/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCC980(void *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *); /* extern */
extern char D_003B71E8[];
extern char D_003B71EC[];
extern char D_005922E9[];
extern char D_005EFE70[];
extern char D_005EFED8[];
extern char D_005EFEDC[];
extern char D_005EFEE0[];
extern char D_005EFEE4[];
extern char D_005EFEE8[];
extern char D_005EFF14[];
extern void *D_00CB3300;

void func_0030C400(void) {
    u32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp98;
    s32 spA0;
    s32 spA8;
    s32 spB0;
    s32 spB8;
    s32 spC0;
    s32 spC8;
    s32 spD0;
    s32 spD8;
    M2C_UNK *var_t2_2;
    s16 temp_a0;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s0_7;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a3;
    s32 *var_a3_2;
    s32 *var_a4;
    s32 *var_a4_2;
    s32 *var_a5;
    s32 *var_a5_2;
    s32 *var_a6;
    s32 *var_a6_2;
    s32 *var_a7;
    s32 *var_a7_2;
    s32 *var_t0;
    s32 *var_t0_2;
    s32 *var_t1;
    s32 *var_t1_2;
    s32 *var_t2;
    s32 temp_a1;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_t8;
    s32 temp_t9;
    s32 var_t3;
    s32 var_v1;
    s64 temp_v1_3;
    s8 temp_s0_5;
    s8 temp_s0_6;
    u32 *var_t3_2;
    u32 temp_a2;
    u32 temp_lo;
    u32 temp_s2;
    void *temp_v1;

    sp88 = (*(u32 *)D_003B71E8);
    temp_a1 = M2C_FIELD(D_00CB3300, s32 *, 0x20);
    temp_a2 = temp_a1 + M2C_FIELD(D_00CB3300, s32 *, 0x314);
    sp8C = (*(s32 *)D_003B71EC);
    if (temp_a2 != 0) {
        temp_lo = (u32) (temp_a1 * 0x64) / temp_a2;
        sp88 = temp_lo;
        sp8C = 0x64 - temp_lo;
    }
    var_t3 = 0;
    var_t2 = &spD8;
    var_t1 = &spD0;
    var_t0 = &spC8;
    var_a7 = &spC0;
    var_a6 = &spB8;
    var_a5 = &spB0;
    var_a4 = &spA8;
    var_a3 = &spA0;
    var_a2 = &sp98;
    var_a1 = &sp90;
    do {
        temp_v1 = D_00CB3300 + ((var_t3 & 0xFF) * 0x2F4);
        temp_s0 = M2C_FIELD(temp_v1, s16 *, 8);
        *var_t2 = (s32) temp_s0;
        if (temp_s0 >= 0x65) {
            *var_t2 = 0x64;
        }
        temp_s0_2 = M2C_FIELD(temp_v1, s16 *, 0xE);
        *var_t1 = (s32) temp_s0_2;
        if (temp_s0_2 >= 0x65) {
            *var_t1 = 0x64;
        }
        temp_s0_3 = M2C_FIELD(temp_v1, s16 *, 0x12);
        *var_t0 = (s32) temp_s0_3;
        if (temp_s0_3 >= 0x65) {
            *var_t0 = 0x64;
        }
        temp_s0_4 = M2C_FIELD(temp_v1, s16 *, 0x14);
        *var_a7 = (s32) temp_s0_4;
        if (temp_s0_4 >= 0x65) {
            *var_a7 = 0x64;
        }
        temp_s0_5 = M2C_FIELD(temp_v1, s8 *, 0x1C);
        *var_a6 = (s32) temp_s0_5;
        if (temp_s0_5 >= 0x65) {
            *var_a6 = 0x64;
        }
        temp_s0_6 = M2C_FIELD(temp_v1, s8 *, 0x1D);
        *var_a5 = (s32) temp_s0_6;
        if (temp_s0_6 >= 0x65) {
            *var_a5 = 0x64;
        }
        temp_s0_7 = M2C_FIELD(temp_v1, s16 *, 0x16);
        *var_a4 = (s32) temp_s0_7;
        if (temp_s0_7 >= 0x65) {
            *var_a4 = 0x64;
        }
        temp_s0_8 = M2C_FIELD(temp_v1, s16 *, 0x18) + M2C_FIELD(temp_v1, s16 *, 0x1A);
        *var_a3 = temp_s0_8;
        if (temp_s0_8 >= 0x65) {
            *var_a3 = 0x64;
        }
        temp_v1_2 = M2C_FIELD(temp_v1, s16 *, 0x10);
        *var_a2 = (s32) temp_v1_2;
        if (temp_v1_2 >= 0x65) {
            *var_a2 = 0x64;
        }
        temp_v1_3 = (s64) ((M2C_FIELD((D_00CB3300 + ((((var_t3 & 0xFF) ^ 1) & 0xFF) * 0x2F4)), s16 *, 0x14) - M2C_FIELD(temp_v1, s16 *, 0x10)) << 0x30) >> 0x30;
        *var_a1 = (s32) temp_v1_3;
        if (temp_v1_3 >= 0x65) {
            *var_a1 = 0x64;
        }
        var_t3 += 1;
        var_t2 += 4;
        var_t1 += 4;
        var_t0 += 4;
        var_a7 += 4;
        var_a6 += 4;
        var_a5 += 4;
        var_a4 += 4;
        var_a3 += 4;
        var_a2 += 4;
        var_a1 += 4;
    } while (var_t3 < 2);
    if (func_00BCC980(D_00CB3300, var_a1, var_a2, var_a3, var_a4, var_a5, var_a6, var_a7) != 0) {
        if ((*(u8 *)D_005922E9) == 0) {
            (*(s32 *)D_005EFF14) += 3;
        } else {
            (*(s32 *)D_005EFEE8) += 3;
        }
        (*(s32 *)D_005EFEE4) += 1;
        if ((*(u8 *)D_005922E9) == 1) {
            (*(s32 *)D_005EFED8) += 1;
            return;
        }
        (*(s32 *)D_005EFEDC) += 1;
        return;
    }
    temp_a0 = M2C_FIELD(D_00CB3300, s16 *, 0x2FC);
    temp_v1_4 = M2C_FIELD(D_00CB3300, s16 *, 8);
    if (temp_a0 < temp_v1_4) {
        (*(s32 *)D_005EFED8) += 1;
    } else if (temp_v1_4 == temp_a0) {
        (*(s32 *)D_005EFEE0) += 1;
    } else {
        (*(s32 *)D_005EFEDC) += 1;
    }
    var_v1 = 0;
    var_t3_2 = &sp88;
    var_t2_2 = ((void *)D_005EFE70);
    var_t1_2 = &spD8;
    var_t0_2 = &spD0;
    var_a7_2 = &spC8;
    var_a6_2 = &spC0;
    var_a5_2 = &spB8;
    var_a4_2 = &spB0;
    var_a3_2 = &spA8;
    var_a2_2 = &spA0;
    var_a1_2 = &sp98;
    var_a0 = &sp90;
    do {
        temp_s2 = *var_t3_2;
        var_v1 += 1;
        temp_s1 = *var_t1_2;
        temp_t8 = *var_t0_2;
        var_t3_2 += 4;
        temp_s6 = *var_a7_2;
        M2C_FIELD(var_t2_2, s32 *, 0x7C) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x7C) + temp_s2);
        var_t1_2 += 4;
        var_t0_2 += 4;
        temp_s5 = *var_a6_2;
        var_a7_2 += 4;
        temp_s4 = *var_a5_2;
        temp_s3 = *var_a4_2;
        M2C_FIELD(var_t2_2, s32 *, 0x78) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x78) + temp_s1);
        var_a6_2 += 4;
        var_a5_2 += 4;
        temp_s2_2 = *var_a3_2;
        var_a4_2 += 4;
        temp_s1_2 = *var_a2_2;
        temp_t9 = *var_a0;
        M2C_FIELD(var_t2_2, s32 *, 0x80) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x80) + temp_t8);
        var_a3_2 += 4;
        var_a2_2 += 4;
        temp_s0_9 = *var_a1_2;
        var_a0 += 4;
        M2C_FIELD(var_t2_2, s32 *, 0x84) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x84) + temp_s6);
        var_a1_2 += 4;
        M2C_FIELD(var_t2_2, s32 *, 0x88) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x88) + temp_s5);
        M2C_FIELD(var_t2_2, s32 *, 0x8C) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x8C) + temp_s4);
        M2C_FIELD(var_t2_2, s32 *, 0x90) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x90) + temp_s3);
        M2C_FIELD(var_t2_2, s32 *, 0x94) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x94) + temp_s2_2);
        M2C_FIELD(var_t2_2, s32 *, 0xA0) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0xA0) + temp_s1_2);
        M2C_FIELD(var_t2_2, s32 *, 0x9C) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x9C) + temp_s0_9);
        M2C_FIELD(var_t2_2, s32 *, 0x98) = (s32) (M2C_FIELD(var_t2_2, s32 *, 0x98) + temp_t9);
        var_t2_2 += 0x2C;
    } while (var_v1 < 2);
}
