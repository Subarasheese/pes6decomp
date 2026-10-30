/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002E1540(void *, void *);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_00211AB0(void *, s8, s8, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00212570(void *, f32 *);               /* extern */
f32 func_00212740(void *, void *, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_002DEF50(s32, M2C_UNK);                /* extern */
s32 func_002DF9D0(M2C_UNK, s32);                    /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_00213AC0(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s64 arg4) {
    f32 sp70;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    s32 sp8C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f20;
    s32 *var_s3;
    s32 temp_v0;
    s32 var_a3;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s3_3;
    s32 var_s4;
    s64 var_a0;
    s64 var_a4;
    s8 temp_a1;
    s8 var_s1_2;
    s8 var_s2_3;
    s8 var_s4_2;
    u8 var_v0;
    void *temp_s1;
    void *temp_s3;
    void *var_a2;
    void *var_s1;
    void *var_s1_3;
    void *var_s1_4;
    void *var_s2;
    void *var_s2_2;
    void *var_s2_4;
    void *var_s3_2;

    var_a4 = arg4;
    var_s3 = arg3;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 9) == 0)) {
        if (var_a4 >= 0xB) {
            var_a4 = 0xA;
        } else if (var_a4 < 0) {
            var_a4 = 0;
        }
        M2C_FIELD(arg0, s8 *, 0xC) = (s8) var_a4;
        var_a0 = (s64) (var_a4 << 0x38) >> 0x38;
        var_a3 = 0;
        if (var_a0 > 0) {
            var_a2 = arg0;
            do {
                M2C_FIELD(var_a2, s32 *, 0x564) = -1;
                var_a3 += 1;
                var_a0 = (s64) M2C_FIELD(arg0, s8 *, 0xC);
                var_a2 += 4;
            } while (var_a3 < var_a0);
        }
        M2C_FIELD(((var_a0 * 4) + arg0), s32 *, 0x564) = arg2;
        var_f20 = 0.0f;
        temp_f0 = func_00212740(arg0 + (M2C_FIELD(arg0, s8 *, 0xC) * 0x7C) + 0x10, arg0 + 0x594, M2C_FIELD(arg0, s32 *, 0x59C), 0, arg1, arg2);
        if (temp_f0 > 0.0f) {
            var_f20 = temp_f0;
        }
        var_s4 = 0;
        if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
            var_s2 = arg0;
            var_s1 = arg0;
            do {
                temp_f0_2 = func_00212740(var_s1 + 0x10, arg0 + 0x594, M2C_FIELD(arg0, s32 *, 0x59C), 2, *var_s3, M2C_FIELD(var_s2, s32 *, 0x564));
                if (var_f20 < temp_f0_2) {
                    var_f20 = temp_f0_2;
                }
                var_s4 += 1;
                var_s2 += 4;
                var_s3 += 4;
                var_s1 += 0x7C;
            } while (var_s4 < M2C_FIELD(arg0, s8 *, 0xC));
        }
        if (var_f20 < 125.0f) {
            var_f20 = 125.0f;
        }
        if (M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0xC) * 0x7C) + arg0), u8 *, 0x11) == 2) {
            var_f0 = 10.0f;
        } else {
            var_f0 = 0.0f;
        }
        sp84 = 0.0f;
        sp80 = var_f0;
        sp8C = 0x41C00000;
        sp88 = var_f20;
        func_00212570(arg0 + (M2C_FIELD(arg0, s8 *, 0xC) * 0x7C) + 0x10, &sp80);
        temp_a1 = M2C_FIELD(arg0, s8 *, 0xC);
        func_00211AB0(arg0 + (temp_a1 * 0x7C) + 0x10, temp_a1, 0, 0, 0xA);
        if (M2C_FIELD(arg0, u8 *, 0x11) == 2) {
            var_f0_2 = 10.0f;
        } else {
            var_f0_2 = 0.0f;
        }
        sp84 = 30.0f;
        sp80 = var_f0_2;
        sp88 = var_f20;
        sp8C = 0x41C00000;
        var_s1_2 = 0;
        if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
            var_s2_2 = arg0;
            do {
                func_00212570(var_s2_2 + 0x10, &sp80);
                func_00211AB0(var_s2_2 + 0x10, var_s1_2, M2C_FIELD(arg0, s8 *, 0xD), 0, 0xA);
                var_s1_2 += 1;
                sp84 += 30.0f;
                var_s2_2 += 0x7C;
            } while (var_s1_2 < M2C_FIELD(arg0, s8 *, 0xC));
        }
        temp_v0 = func_002DF9D0(3, M2C_FIELD(arg0, s32 *, 0x594));
        M2C_FIELD(arg0, s32 *, 0x5A0) = temp_v0;
        func_002DEF50(temp_v0, 0);
        M2C_FIELD(arg0, s8 *, 0xD) = 0;
        temp_s1 = M2C_FIELD(arg0, void **, 0);
        if (temp_s1 != NULL) {
            if (M2C_FIELD(temp_s1, u8 *, 9) != 2) {
                if (!(M2C_FIELD(temp_s1, u8 *, 8) & 1)) {
                    var_s2_3 = M2C_FIELD(temp_s1, s8 *, 0xC);
                } else {
                    var_s2_3 = M2C_FIELD(temp_s1, s8 *, 0xC) + 1;
                }
                var_s4_2 = 0;
                if (var_s2_3 > 0) {
                    var_s3_2 = temp_s1;
                    do {
                        func_00211AB0(var_s3_2 + 0x10, var_s4_2, M2C_FIELD(temp_s1, s8 *, 0xD), 0, 0xA);
                        var_s4_2 += 1;
                        var_s3_2 += 0x7C;
                    } while (var_s4_2 < var_s2_3);
                }
                var_s3_3 = 0;
                var_s2_4 = temp_s1;
                do {
                    func_001F3D10(M2C_FIELD(var_s2_4, s32 *, 0x594), 0U);
                    var_s3_3 += 1;
                    var_s2_4 += 4;
                } while (var_s3_3 < 2);
                var_v0 = 4;
            } else {
                var_v0 = 3;
            }
            M2C_FIELD(temp_s1, u8 *, 9) = var_v0;
        }
        var_s2_5 = 0;
        M2C_FIELD(arg0, u8 *, 9) = 1U;
        var_s1_3 = arg0;
        do {
            func_001F3D10(M2C_FIELD(var_s1_3, s32 *, 0x594), 1U);
            var_s2_5 += 1;
            var_s1_3 += 4;
        } while (var_s2_5 < 2);
        var_s2_6 = 0;
        var_s1_4 = arg0;
        M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) | 1);
        do {
            temp_s3 = var_s1_4 + 0x10;
            func_002E1540(temp_s3 + 0x28, &sp70);
            if (var_s2_6 == M2C_FIELD(arg0, s8 *, 0xD)) {
                if (M2C_FIELD(temp_s3, u8 *, 1) == 2) {
                    var_f1 = 10.0f;
                } else {
                    var_f1 = 0.0f;
                }
                sp70 = var_f1 - 5.0f;
                M2C_FIELD(var_s1_4, s8 *, 0x10) = 2;
            } else {
                if (M2C_FIELD(temp_s3, u8 *, 1) == 2) {
                    var_f0_3 = 10.0f;
                } else {
                    var_f0_3 = 0.0f;
                }
                sp70 = var_f0_3;
                M2C_FIELD(var_s1_4, s8 *, 0x10) = 0;
            }
            func_00212570(temp_s3, &sp70);
            var_s2_6 += 1;
            var_s1_4 += 0x7C;
        } while (var_s2_6 < 0xB);
    }
}
