/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
s32 func_002DF9D0(M2C_UNK, s32);                    /* extern */
M2C_UNK func_002E1D10(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_002F1A00(void *, M2C_UNK, M2C_UNK, s32, s8, s32); /* extern */
s32 func_002F1AE0(void *, void *, s32, s32, s8);    /* extern */
M2C_UNK func_002F2D80(void *, s32);                 /* extern */

void func_002F46F0(void *arg0, void *arg1) {
    s8 sp88;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a5;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_a0;
    s8 temp_s2;
    void *temp_s3;
    void *var_s0;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;
    void *var_s2_2;
    void *var_s4;

    var_v1 = 8;
    var_a0 = &sp88;
    var_s4 = arg1;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    if (arg0 != NULL) {
        if (var_s4 == NULL) {
            return;
        }
        temp_s3 = arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 8) + 1) % 2) * 0x4A4) + 0xB4;
        func_002F2D80(temp_s3, M2C_FIELD(arg0, s32 *, 0xB0));
        var_s2 = 0;
        var_s1 = var_s4;
        var_s0 = temp_s3;
        M2C_FIELD(temp_s3, f32 *, 0x498) = (f32) M2C_FIELD(var_s4, f32 *, 0x118);
        M2C_FIELD(temp_s3, f32 *, 0x49C) = (f32) M2C_FIELD(var_s4, f32 *, 0x11C);
        M2C_FIELD(temp_s3, f32 *, 0x4A0) = (f32) M2C_FIELD(var_s4, f32 *, 0x120);
        do {
            if (func_002F1AE0(var_s0, var_s1, M2C_FIELD(arg0, s32 *, 0xA8), M2C_FIELD(arg0, s32 *, 0xB0), M2C_FIELD(arg0, s8 *, 7)) != 0) {
                M2C_FIELD(temp_s3, s8 *, 0x490) = (s8) (M2C_FIELD(temp_s3, s8 *, 0x490) + 1);
            }
            var_s2 += 1;
            var_s1 += 0x10;
            var_s0 += 0x24;
        } while (var_s2 < 2);
        var_s0_2 = 0;
        var_s2_2 = var_s4;
        var_s1_2 = temp_s3;
        do {
            if (func_002F1AE0(var_s1_2 + 0x48, var_s2_2 + 0x20, M2C_FIELD(arg0, s32 *, 0xA8), M2C_FIELD(arg0, s32 *, 0xB0), M2C_FIELD(arg0, s8 *, 7)) != 0) {
                M2C_FIELD(temp_s3, s8 *, 0x491) = (s8) (M2C_FIELD(temp_s3, s8 *, 0x491) + 1);
            }
            var_s0_2 += 1;
            var_s2_2 += 0x10;
            var_s1_2 += 0x24;
        } while (var_s0_2 < 8);
        var_s0_3 = 0;
        var_s1_3 = temp_s3;
        do {
            temp_s2 = M2C_FIELD(arg0, s8 *, 7);
            if ((var_s4 + 0xA0) == NULL) {
                var_v1_2 = 0;
            } else {
                temp_a0 = M2C_FIELD(var_s4, s32 *, 0xA0);
                if (temp_a0 == 1) {
                    var_a5 = M2C_FIELD(var_s4, s32 *, 0xA4);
                    goto block_23;
                }
                if (temp_a0 == 2) {
                    var_a5 = func_001F08B0(M2C_FIELD(var_s4, s32 *, 0xA8));
block_23:
                    if (var_a5 == 0) {
                        var_v1_2 = 0;
                    } else {
                        func_002F1A00(var_s1_3 + 0x168, 0x11, 0x11, M2C_FIELD(arg0, s32 *, 0xA8), temp_s2, var_a5);
                        func_002E1D10(var_s1_3 + 0x18C, 1, 0x17, M2C_FIELD(arg0, s32 *, 0xA4));
                        var_v1_2 = 1;
                    }
                } else {
                    var_v1_2 = 0;
                }
            }
            if (var_v1_2 != 0) {
                M2C_FIELD(temp_s3, s8 *, 0x492) = (s8) (M2C_FIELD(temp_s3, s8 *, 0x492) + 1);
            }
            var_s0_3 += 1;
            var_s4 += 0xC;
            var_s1_3 += 0x4C;
        } while (var_s0_3 < 0xA);
        if (M2C_FIELD(temp_s3, s8 *, 0x492) != 0) {
            temp_v0 = func_002DF9D0(9, M2C_FIELD(arg0, s32 *, 0xA4));
            M2C_FIELD(temp_s3, s32 *, 0x494) = temp_v0;
            func_002DF8E0(temp_v0, 0);
        }
        M2C_FIELD(arg0, s8 *, 1) = 1;
    }
}
