/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008FC130(void *);
extern s32 func_008FC140(s32, void *, s32, u32);
void func_008F9C68(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a6;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_v0;
    u32 temp_s0;
    void *temp_a1_4;
    void *temp_a3_2;
    void *temp_a4_2;
    void *temp_a5;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_s2 = M2C_FIELD(arg0, void **, 0x40);
    temp_a1 = M2C_FIELD(temp_s2, s32 *, 0x858);
    if (temp_a1 == 0) {
        M2C_FIELD(temp_s2, s32 *, 0x184) = 3;
        M2C_FIELD(temp_s2, s32 *, 0x18C) = 1;
        M2C_FIELD(temp_s2, s32 *, 0x154) = 5;
        M2C_FIELD(temp_s2, s32 *, 0x14C) = 1;
        M2C_FIELD(temp_s2, s32 *, 0x150) = 1;
        M2C_FIELD(temp_s2, s32 *, 0x198) = 1;
    }
    M2C_FIELD(temp_s2, s32 *, 0x13C) = (s32) ((s32) (M2C_FIELD(temp_s2, s32 *, 0x134) + 0xF) >> 4);
    if (temp_a1 != 0) {
        if (M2C_FIELD(temp_s2, s32 *, 0x14C) == 0) {
            var_v0 = ((s32) (M2C_FIELD(temp_s2, s32 *, 0x138) + 0x1F) >> 5) * 2;
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_v0 = (s32) (M2C_FIELD(temp_s2, s32 *, 0x138) + 0xF) >> 4;
    }
    M2C_FIELD(temp_s2, s32 *, 0x140) = var_v0;
    temp_s5 = var_v0 * 0x10;
    temp_s4 = M2C_FIELD(temp_s2, s32 *, 0x13C) * 0x10;
    if ((temp_s4 != M2C_FIELD(arg0, s32 *, 0)) || (temp_s5 != M2C_FIELD(arg0, s32 *, 4))) {
        temp_s1 = temp_s2 + 0x118;
        M2C_FIELD(arg0, s32 *, 0) = temp_s4;
        M2C_FIELD(arg0, s32 *, 4) = temp_s5;
        temp_s0 = (u32) (temp_s4 * (temp_s5 * 0x180)) >> 8;
        func_008FC130(temp_s1);
        M2C_FIELD(temp_s2, s32 *, 0x10C) = func_008FC140((s32) temp_s2, temp_s1, (s32) temp_s0, 0x40U);
        M2C_FIELD(temp_s2, s32 *, 0x110) = func_008FC140((s32) temp_s2, temp_s1, (s32) temp_s0, 0x40U);
        temp_v0 = func_008FC140((s32) temp_s2, temp_s1, (s32) temp_s0, 0x40U);
        temp_v1 = M2C_FIELD(temp_s2, s32 *, 0x87C);
        M2C_FIELD(temp_s2, s32 *, 0x114) = temp_v0;
        if (temp_v1 == 0) {
            temp_a2 = M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, s32 *, 4);
            temp_a1_2 = (M2C_FIELD(temp_s2, s32 *, 0x10C) & 0x0FFFFFFF) | 0x20000000;
            temp_v1_2 = (M2C_FIELD(temp_s2, s32 *, 0x110) & 0x0FFFFFFF) | 0x20000000;
            temp_a4 = (temp_v0 & 0x0FFFFFFF) | 0x20000000;
            M2C_FIELD(temp_s2, s32 *, 0x1F8) = temp_a1_2;
            temp_v0_2 = ((s32) ((temp_a2 > -1) ? temp_a2 : (temp_a2 + 0x1FF)) >> 9) * 0x180;
            M2C_FIELD(temp_s2, s32 *, 0x260) = temp_v1_2;
            M2C_FIELD(temp_s2, s32 *, 0x330) = temp_a1_2;
            M2C_FIELD(temp_s2, s32 *, 0x398) = temp_v1_2;
            M2C_FIELD(temp_s2, s32 *, 0x2C8) = temp_a4;
            M2C_FIELD(temp_s2, s32 *, 0x468) = (s32) (temp_a1_2 + temp_v0_2);
            M2C_FIELD(temp_s2, s32 *, 0x4D0) = (s32) (temp_v1_2 + temp_v0_2);
            M2C_FIELD(temp_s2, s32 *, 0x538) = (s32) (temp_a4 + temp_v0_2);
            M2C_FIELD(temp_s2, s32 *, 0x400) = temp_a4;
            goto block_13;
        }
        var_a2 = temp_s4 >> 4;
        if (temp_v1 == 1) {
            temp_a2_2 = M2C_FIELD(temp_s2, s32 *, 0x10C);
            temp_v1_3 = M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, s32 *, 4);
            temp_a1_3 = M2C_FIELD(temp_s2, s32 *, 0x110);
            M2C_FIELD(temp_s2, s32 *, 0x1F8) = temp_a2_2;
            M2C_FIELD(temp_s2, s32 *, 0x260) = temp_a1_3;
            M2C_FIELD(temp_s2, s32 *, 0x330) = temp_a2_2;
            M2C_FIELD(temp_s2, s32 *, 0x398) = temp_a1_3;
            M2C_FIELD(temp_s2, s32 *, 0x2C8) = temp_v0;
            temp_v0_3 = ((s32) ((temp_v1_3 > -1) ? temp_v1_3 : (temp_v1_3 + 0x1FF)) >> 9) * 0x180;
            M2C_FIELD(temp_s2, s32 *, 0x400) = temp_v0;
            M2C_FIELD(temp_s2, s32 *, 0x468) = (s32) (temp_a2_2 + temp_v0_3);
            M2C_FIELD(temp_s2, s32 *, 0x4D0) = (s32) (temp_a1_3 + temp_v0_3);
            M2C_FIELD(temp_s2, s32 *, 0x538) = (s32) (temp_v0 + temp_v0_3);
block_13:
            var_a2 = temp_s4 >> 4;
        }
        temp_v0_4 = temp_s2 + 0x1F8;
        temp_a3 = temp_s5 >> 4;
        M2C_FIELD(temp_v0_4, s32 *, 0x10) = temp_a3;
        temp_v1_4 = temp_s2 + 0x260;
        M2C_FIELD(temp_v0_4, s32 *, 4) = temp_s4;
        temp_a0 = temp_s5 + ((u32) temp_s5 >> 0x1F);
        M2C_FIELD(temp_v0_4, s32 *, 8) = temp_s5;
        temp_a6 = temp_a0 >> 5;
        M2C_FIELD(temp_v0_4, s32 *, 0xC) = var_a2;
        temp_a0_2 = temp_a0 >> 1;
        M2C_FIELD(temp_v1_4, s32 *, 0x10) = temp_a3;
        temp_v0_5 = temp_s2 + 0x2C8;
        M2C_FIELD(temp_v1_4, s32 *, 4) = temp_s4;
        temp_a1_4 = temp_s2 + 0x330;
        M2C_FIELD(temp_v1_4, s32 *, 8) = temp_s5;
        temp_a4_2 = temp_s2 + 0x468;
        M2C_FIELD(temp_v1_4, s32 *, 0xC) = var_a2;
        temp_a5 = temp_s2 + 0x4D0;
        M2C_FIELD(temp_v0_5, s32 *, 0x10) = temp_a3;
        temp_v1_5 = temp_s2 + 0x398;
        M2C_FIELD(temp_v0_5, s32 *, 4) = temp_s4;
        temp_a3_2 = temp_s2 + 0x400;
        M2C_FIELD(temp_v0_5, s32 *, 8) = temp_s5;
        M2C_FIELD(temp_v0_5, s32 *, 0xC) = var_a2;
        M2C_FIELD(temp_a1_4, s32 *, 0x10) = temp_a6;
        temp_v0_6 = temp_s2 + 0x538;
        M2C_FIELD(temp_a1_4, s32 *, 4) = temp_s4;
        M2C_FIELD(temp_a1_4, s32 *, 8) = temp_a0_2;
        M2C_FIELD(temp_a1_4, s32 *, 0xC) = var_a2;
        M2C_FIELD(temp_v1_5, s32 *, 0x10) = temp_a6;
        M2C_FIELD(temp_v1_5, s32 *, 4) = temp_s4;
        M2C_FIELD(temp_v1_5, s32 *, 8) = temp_a0_2;
        M2C_FIELD(temp_v1_5, s32 *, 0xC) = var_a2;
        M2C_FIELD(temp_a3_2, s32 *, 0x10) = temp_a6;
        M2C_FIELD(temp_a3_2, s32 *, 4) = temp_s4;
        M2C_FIELD(temp_a3_2, s32 *, 8) = temp_a0_2;
        M2C_FIELD(temp_a3_2, s32 *, 0xC) = var_a2;
        M2C_FIELD(temp_a4_2, s32 *, 0x10) = temp_a6;
        M2C_FIELD(temp_a4_2, s32 *, 4) = temp_s4;
        M2C_FIELD(temp_a4_2, s32 *, 8) = temp_a0_2;
        M2C_FIELD(temp_a4_2, s32 *, 0xC) = var_a2;
        M2C_FIELD(temp_a5, s32 *, 0x10) = temp_a6;
        M2C_FIELD(temp_a5, s32 *, 4) = temp_s4;
        M2C_FIELD(temp_a5, s32 *, 8) = temp_a0_2;
        M2C_FIELD(temp_a5, s32 *, 0xC) = var_a2;
        M2C_FIELD(temp_v0_6, s32 *, 4) = temp_s4;
        M2C_FIELD(temp_v0_6, s32 *, 8) = temp_a0_2;
        M2C_FIELD(temp_v0_6, s32 *, 0x10) = temp_a6;
        M2C_FIELD(temp_v0_6, s32 *, 0xC) = var_a2;
    }
}
