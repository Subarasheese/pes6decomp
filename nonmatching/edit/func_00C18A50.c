/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1A750(void *, s32);
extern void func_00B912F0(s32, u8);
extern s32 func_00BCF3A0(s32);
extern s32 func_002F82B0(s32, s32);
extern void func_001B6670(void);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
extern s32 D_003EB1D8;

s32 func_00C18A50(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s8 temp_s3;
    u8 temp_v1;

    var_s3 = 0;
    if (D_003EB1D8 == 0) {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x35);
        temp_a3 = temp_v1 - 1;
        M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) (temp_a3 % 3);
        M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) (((temp_v1 - 1) / 3) + ((u32) temp_a3 >> 0x1F));
        func_00C1A750(arg0, 3);
        func_00B912F0(0x21, arg1 & 0xFF);
        func_001B66C0(0xF1003B);
        func_00BC3FB0(0x20000);
        D_003EB1D8 = 1;
    }
    var_s1 = M2C_FIELD(arg0, s32 *, 0x2E4);
    var_s0 = M2C_FIELD(arg0, s32 *, 0x2E8);
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(1) == 0) {
                if (func_00BCF3A0(8) != 0) {
                    var_s0 += 1;
                }
            } else {
                var_s0 -= 1;
            }
        } else {
            func_0026E840(0x84008401);
            D_003EB1D8 = 0;
            var_s3 = 1;
        }
    } else {
        var_s4 = 0;
        temp_s3 = M2C_FIELD(arg0, s32 *, 0x2E4) + (M2C_FIELD(arg0, s32 *, 0x2E8) * 3) + 1;
        do {
            M2C_FIELD(func_002F82B0((s32) M2C_FIELD(arg0, u16 *, 0x2E0), var_s4), s8 *, 0x35) = temp_s3;
            var_s4 += 1;
        } while (var_s4 < 4);
        func_0026E840(0x84028400);
        D_003EB1D8 = 0;
        var_s3 = 1;
    }
    if (func_00BCF3A0(0x80) == 0) {
        if (func_00BCF3A0(0x400) != 0) {
            var_s1 += 1;
        }
    } else {
        var_s1 -= 1;
    }
    if (var_s1 >= 3) {
        var_s1 = 2;
    } else if (var_s1 < 0) {
        var_s1 = 0;
    }
    if (var_s0 >= 4) {
        var_s0 = 3;
    } else if (var_s0 < 0) {
        var_s0 = 0;
    }
    if ((var_s1 != M2C_FIELD(arg0, s32 *, 0x2E4)) || (var_s0 != M2C_FIELD(arg0, s32 *, 0x2E8))) {
        M2C_FIELD(arg0, s32 *, 0x2E4) = var_s1;
        M2C_FIELD(arg0, s32 *, 0x2E8) = var_s0;
        func_00C1A750(arg0, 3);
        func_0026E840(0x8400F802);
    }
    if (var_s3 != 0) {
        func_001B6670();
        func_00BC3FB0(3);
    }
    return var_s3;
}
