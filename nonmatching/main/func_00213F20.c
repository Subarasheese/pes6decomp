/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002E1540(void *, void *);
extern s32 func_001F1620(void *);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_00211AB0(void *, s32, s8, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00212570(void *, f32 *);               /* extern */
f32 func_00212740(void *, void *, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00213AC0(void *, s32, s32, s32 *, s8); /* extern */
M2C_UNK func_002DEF50(s32, M2C_UNK);                /* extern */
s32 func_002DF9D0(M2C_UNK, s32);                    /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_00213F20(void *arg0, s32 *arg1, s32 *arg2, s8 arg3) {
    f32 sp70;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    s32 sp8C;
    f32 temp_f0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f20;
    s32 *var_a2;
    s32 *var_s0;
    s32 temp_v0;
    s32 var_a2_2;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_v1;
    s8 temp_s2;
    s8 var_s4;
    void *temp_s3;
    void *temp_s3_2;
    void *var_a1;
    void *var_a1_2;
    void *var_s0_3;
    void *var_s0_4;
    void *var_s2_2;
    void *var_s3;
    void *var_s4_2;

    var_a2 = arg2;
    var_s4 = arg3;
    var_s0 = arg1;
    if (arg0 != NULL) {
        if (var_s0 == NULL) {
            return;
        }
        temp_s3 = M2C_FIELD(arg0, void **, 0);
        if (temp_s3 != NULL) {
            temp_s2 = M2C_FIELD(temp_s3, s8 *, 0xD);
            func_00213AC0(arg0, func_001F1620(M2C_FIELD(((temp_s2 * 0x7C) + temp_s3), void **, 0x80)), M2C_FIELD(((temp_s2 * 4) + temp_s3), s32 *, 0x564), var_s0, var_s4);
            return;
        }
        if (M2C_FIELD(arg0, u8 *, 9) == 0) {
            if (var_s4 >= 0xC) {
                var_s4 = 0xB;
            } else if (var_s4 < 0) {
                var_s4 = 0;
            }
            M2C_FIELD(arg0, s8 *, 0xC) = var_s4;
            if (var_a2 == NULL) {
                var_a2_2 = 0;
                if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
                    var_a1 = arg0;
                    do {
                        M2C_FIELD(var_a1, s32 *, 0x564) = -1;
                        var_a2_2 += 1;
                        var_a1 += 4;
                    } while (var_a2_2 < M2C_FIELD(arg0, s8 *, 0xC));
                }
            } else {
                var_v1 = 0;
                if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
                    var_a1_2 = arg0;
                    do {
                        var_v1 += 1;
                        M2C_FIELD(var_a1_2, s32 *, 0x564) = (s32) *var_a2;
                        var_a2 += 4;
                        var_a1_2 += 4;
                    } while (var_v1 < M2C_FIELD(arg0, s8 *, 0xC));
                }
            }
            var_f20 = 0.0f;
            var_s2 = 0;
            if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
                var_s4_2 = arg0;
                var_s3 = arg0;
                do {
                    temp_f0 = func_00212740(var_s3 + 0x10, arg0 + 0x594, M2C_FIELD(arg0, s32 *, 0x59C), 1, *var_s0, M2C_FIELD(var_s4_2, s32 *, 0x564));
                    if (var_f20 < temp_f0) {
                        var_f20 = temp_f0;
                    }
                    var_s2 += 1;
                    var_s4_2 += 4;
                    var_s0 += 4;
                    var_s3 += 0x7C;
                } while (var_s2 < M2C_FIELD(arg0, s8 *, 0xC));
            }
            if (var_f20 < 125.0f) {
                var_f20 = 125.0f;
            }
            if (M2C_FIELD(arg0, u8 *, 0x11) == 2) {
                var_f0 = 10.0f;
            } else {
                var_f0 = 0.0f;
            }
            sp84 = 0.0f;
            sp80 = var_f0;
            sp8C = 0x41C00000;
            sp88 = var_f20;
            var_s0_2 = 0;
            if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
                var_s2_2 = arg0;
                do {
                    func_00212570(var_s2_2 + 0x10, &sp80);
                    func_00211AB0(var_s2_2 + 0x10, var_s0_2, M2C_FIELD(arg0, s8 *, 0xD), 0, 0xA);
                    var_s0_2 += 1;
                    sp84 += 30.0f;
                    var_s2_2 += 0x7C;
                } while (var_s0_2 < M2C_FIELD(arg0, s8 *, 0xC));
            }
            temp_v0 = func_002DF9D0(3, M2C_FIELD(arg0, s32 *, 0x594));
            M2C_FIELD(arg0, s32 *, 0x5A0) = temp_v0;
            func_002DEF50(temp_v0, 0);
            M2C_FIELD(arg0, s8 *, 0xD) = 0;
            M2C_FIELD(arg0, u8 *, 9) = 1U;
            var_s2_3 = 0;
            var_s0_3 = arg0;
            do {
                func_001F3D10(M2C_FIELD(var_s0_3, s32 *, 0x594), 1U);
                var_s2_3 += 1;
                var_s0_3 += 4;
            } while (var_s2_3 < 2);
            var_s2_4 = 0;
            var_s0_4 = arg0;
            do {
                temp_s3_2 = var_s0_4 + 0x10;
                func_002E1540(temp_s3_2 + 0x28, &sp70);
                if (var_s2_4 == M2C_FIELD(arg0, s8 *, 0xD)) {
                    if (M2C_FIELD(temp_s3_2, u8 *, 1) == 2) {
                        var_f1 = 10.0f;
                    } else {
                        var_f1 = 0.0f;
                    }
                    sp70 = var_f1 - 5.0f;
                    M2C_FIELD(var_s0_4, s8 *, 0x10) = 2;
                } else {
                    if (M2C_FIELD(temp_s3_2, u8 *, 1) == 2) {
                        var_f0_2 = 10.0f;
                    } else {
                        var_f0_2 = 0.0f;
                    }
                    sp70 = var_f0_2;
                    M2C_FIELD(var_s0_4, s8 *, 0x10) = 0;
                }
                func_00212570(temp_s3_2, &sp70);
                var_s2_4 += 1;
                var_s0_4 += 0x7C;
            } while (var_s2_4 < 0xB);
        }
    }
}
