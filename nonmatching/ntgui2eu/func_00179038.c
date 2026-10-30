/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00179038(void *arg0) {
    u8 sp0;
    u8 sp1;
    u8 sp2;
    s8 sp3;
    u8 sp4;
    u8 sp5;
    u8 sp6;
    s8 sp7;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 var_a6;
    s32 var_a6_2;
    s8 temp_a0_10;
    s8 temp_a0_11;
    s8 temp_a0_12;
    s8 temp_a0_13;
    s8 temp_a0_14;
    s8 temp_a0_15;
    s8 temp_a0_16;
    s8 temp_a0_7;
    s8 temp_a0_8;
    s8 temp_a0_9;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 var_v0;
    s8 var_v0_10;
    s8 var_v0_11;
    s8 var_v0_12;
    s8 var_v0_2;
    s8 var_v0_3;
    s8 var_v0_4;
    s8 var_v0_5;
    s8 var_v0_6;
    s8 var_v0_7;
    s8 var_v0_8;
    s8 var_v0_9;
    u8 temp_a1;
    u8 temp_a3_2;
    u8 temp_a6;
    u8 var_a0;
    void *temp_a2;
    void *temp_a3;
    void *temp_a4;
    void *temp_a5;
    void *temp_t0;
    void *temp_t1;
    void *var_a4;
    void *var_a4_2;
    void *var_a5;
    void *var_a5_2;

    temp_a2 = arg0 + 0x910;
    temp_a3 = temp_a2 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0);
    temp_t0 = temp_a3 + 0x170;
    temp_t1 = temp_a3 + 0x330;
    temp_a5 = temp_a3 + 0x150;
    temp_a4 = temp_a3 + 0x310;
    if (M2C_FIELD(temp_a2, s32 *, 0x33B0) != 0) {
        M2C_FIELD(temp_a3, u8 *, 0x150) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A4);
        temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x5B0) / 10.0f;
        M2C_FIELD(temp_a5, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A5);
        M2C_FIELD(temp_a5, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A6);
        M2C_FIELD(temp_a5, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A7)) / 255);
        var_a5 = temp_t0;
        M2C_FIELD(temp_a3, u8 *, 0x310) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A4);
        M2C_FIELD(temp_a4, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A5);
        M2C_FIELD(temp_a4, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A6);
        M2C_FIELD(temp_a4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A7)) / 255);
        temp_a3_2 = M2C_FIELD(temp_a2, u8 *, 0x33A4);
        temp_a0 = temp_a3_2 - M2C_FIELD(temp_a2, u8 *, 0x33A0);
        var_a4 = temp_t1;
        if (temp_a0 >= 0) {
            var_f0 = (f32) ((temp_a0 < 0x100) ? temp_a0 : 0xFF);
        } else {
            var_f0 = 0.0f;
        }
        temp_a6 = M2C_FIELD(temp_a2, u8 *, 0x33A5);
        temp_a0_2 = temp_a6 - M2C_FIELD(temp_a2, u8 *, 0x33A1);
        sp0 = (u8) (s32) (var_f0 / temp_f1);
        if (temp_a0_2 >= 0) {
            var_f0_2 = (f32) ((temp_a0_2 < 0x100) ? temp_a0_2 : 0xFF);
        } else {
            var_f0_2 = 0.0f;
        }
        temp_a1 = M2C_FIELD(temp_a2, u8 *, 0x33A6);
        temp_a0_3 = temp_a1 - M2C_FIELD(temp_a2, u8 *, 0x33A2);
        sp1 = (u8) (s32) (var_f0_2 / temp_f1);
        if (temp_a0_3 >= 0) {
            var_f0_3 = (f32) ((temp_a0_3 < 0x100) ? temp_a0_3 : 0xFF);
        } else {
            var_f0_3 = 0.0f;
        }
        sp2 = (u8) (s32) (var_f0_3 / temp_f1);
        temp_a0_4 = M2C_FIELD(temp_a2, u8 *, 0x33A8) - temp_a3_2;
        sp3 = 0x80;
        if (temp_a0_4 >= 0) {
            var_f0_4 = (f32) ((temp_a0_4 < 0x100) ? temp_a0_4 : 0xFF);
        } else {
            var_f0_4 = 0.0f;
        }
        temp_a0_5 = M2C_FIELD(temp_a2, u8 *, 0x33A9) - temp_a6;
        sp4 = (u8) (s32) (var_f0_4 / temp_f1);
        if (temp_a0_5 >= 0) {
            var_f0_5 = (f32) ((temp_a0_5 < 0x100) ? temp_a0_5 : 0xFF);
        } else {
            var_f0_5 = 0.0f;
        }
        temp_a0_6 = M2C_FIELD(temp_a2, u8 *, 0x33AA) - temp_a1;
        sp5 = (u8) (s32) (var_f0_5 / temp_f1);
        if (temp_a0_6 >= 0) {
            var_f0_6 = (f32) ((temp_a0_6 < 0x100) ? temp_a0_6 : 0xFF);
        } else {
            var_f0_6 = 0.0f;
        }
        sp6 = (u8) (s32) (var_f0_6 / temp_f1);
        sp7 = 0x80;
        var_a6 = 0;
        do {
            if (var_a6 > 6) {
                temp_a0_7 = sp4 + M2C_FIELD(temp_a2, u8 *, 0x33A8);
                if (temp_a0_7 >= 0) {
                    var_v0 = (temp_a0_7 < 0x100) ? temp_a0_7 : -1;
                } else {
                    var_v0 = 0;
                }
                M2C_FIELD(var_a4, s8 *, 0) = var_v0;
                temp_a0_8 = sp5 + M2C_FIELD(temp_a2, u8 *, 0x33A9);
                if (temp_a0_8 >= 0) {
                    var_v0_2 = (temp_a0_8 < 0x100) ? temp_a0_8 : -1;
                } else {
                    var_v0_2 = 0;
                }
                M2C_FIELD(var_a4, s8 *, 1) = var_v0_2;
                temp_a0_9 = sp6 + M2C_FIELD(temp_a2, u8 *, 0x33AA);
                if (temp_a0_9 >= 0) {
                    var_v0_3 = (temp_a0_9 < 0x100) ? temp_a0_9 : -1;
                } else {
                    var_v0_3 = 0;
                }
                M2C_FIELD(var_a4, s8 *, 2) = var_v0_3;
                M2C_FIELD(var_a4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33AB)) / 255);
                temp_v1 = sp0 + M2C_FIELD(temp_a2, u8 *, 0x33A0);
                if (temp_v1 >= 0) {
                    var_v0_4 = (temp_v1 < 0x100) ? temp_v1 : -1;
                } else {
                    var_v0_4 = 0;
                }
                M2C_FIELD(var_a5, s8 *, 0) = var_v0_4;
                temp_a0_10 = sp1 + M2C_FIELD(temp_a2, u8 *, 0x33A1);
                if (temp_a0_10 >= 0) {
                    var_v0_5 = (temp_a0_10 < 0x100) ? temp_a0_10 : -1;
                } else {
                    var_v0_5 = 0;
                }
                M2C_FIELD(var_a5, s8 *, 1) = var_v0_5;
                temp_a0_11 = sp2 + M2C_FIELD(temp_a2, u8 *, 0x33A2);
                if (temp_a0_11 >= 0) {
                    var_v0_6 = (temp_a0_11 < 0x100) ? temp_a0_11 : -1;
                } else {
                    var_v0_6 = 0;
                }
                M2C_FIELD(var_a5, s8 *, 2) = var_v0_6;
                var_a0 = M2C_FIELD(temp_a2, u8 *, 0x33A3);
            } else {
                temp_a0_12 = sp0 + M2C_FIELD(temp_a2, u8 *, 0x33A0);
                if (temp_a0_12 >= 0) {
                    var_v0_7 = (temp_a0_12 < 0x100) ? temp_a0_12 : -1;
                } else {
                    var_v0_7 = 0;
                }
                M2C_FIELD(var_a4, s8 *, 0) = var_v0_7;
                temp_a0_13 = sp1 + M2C_FIELD(temp_a2, u8 *, 0x33A1);
                if (temp_a0_13 >= 0) {
                    var_v0_8 = (temp_a0_13 < 0x100) ? temp_a0_13 : -1;
                } else {
                    var_v0_8 = 0;
                }
                M2C_FIELD(var_a4, s8 *, 1) = var_v0_8;
                temp_a0_14 = sp2 + M2C_FIELD(temp_a2, u8 *, 0x33A2);
                if (temp_a0_14 >= 0) {
                    var_v0_9 = (temp_a0_14 < 0x100) ? temp_a0_14 : -1;
                } else {
                    var_v0_9 = 0;
                }
                M2C_FIELD(var_a4, s8 *, 2) = var_v0_9;
                M2C_FIELD(var_a4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A3)) / 255);
                temp_v1_2 = sp4 + M2C_FIELD(temp_a2, u8 *, 0x33A8);
                if (temp_v1_2 >= 0) {
                    var_v0_10 = (temp_v1_2 < 0x100) ? temp_v1_2 : -1;
                } else {
                    var_v0_10 = 0;
                }
                M2C_FIELD(var_a5, s8 *, 0) = var_v0_10;
                temp_a0_15 = sp5 + M2C_FIELD(temp_a2, u8 *, 0x33A9);
                if (temp_a0_15 >= 0) {
                    var_v0_11 = (temp_a0_15 < 0x100) ? temp_a0_15 : -1;
                } else {
                    var_v0_11 = 0;
                }
                M2C_FIELD(var_a5, s8 *, 1) = var_v0_11;
                temp_a0_16 = sp6 + M2C_FIELD(temp_a2, u8 *, 0x33AA);
                if (temp_a0_16 >= 0) {
                    var_v0_12 = (temp_a0_16 < 0x100) ? temp_a0_16 : -1;
                } else {
                    var_v0_12 = 0;
                }
                M2C_FIELD(var_a5, s8 *, 2) = var_v0_12;
                var_a0 = M2C_FIELD(temp_a2, u8 *, 0x33AB);
            }
            M2C_FIELD(var_a5, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * var_a0) / 255);
            var_a6 += 1;
            var_a5 += 0x20;
            var_a4 += 0x20;
        } while (var_a6 < 0xC);
        return;
    }
    var_a6_2 = 0xB;
    M2C_FIELD(temp_a3, u8 *, 0x150) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A0);
    M2C_FIELD(temp_a5, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A1);
    M2C_FIELD(temp_a5, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A2);
    M2C_FIELD(temp_a5, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A3)) / 255);
    var_a5_2 = temp_t0;
    M2C_FIELD(temp_a3, u8 *, 0x310) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A0);
    M2C_FIELD(temp_a4, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A1);
    M2C_FIELD(temp_a4, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A2);
    M2C_FIELD(temp_a4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A3)) / 255);
    var_a4_2 = temp_t1;
    do {
        var_a6_2 -= 1;
        M2C_FIELD(var_a4_2, u8 *, 0) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A0);
        M2C_FIELD(var_a4_2, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A1);
        M2C_FIELD(var_a4_2, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A2);
        M2C_FIELD(var_a4_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A3)) / 255);
        var_a4_2 += 0x20;
        M2C_FIELD(var_a5_2, u8 *, 0) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A0);
        M2C_FIELD(var_a5_2, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A1);
        M2C_FIELD(var_a5_2, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33A2);
        M2C_FIELD(var_a5_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x33A3)) / 255);
        var_a5_2 += 0x20;
    } while (var_a6_2 >= 0);
}
