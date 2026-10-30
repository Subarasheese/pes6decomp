/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_002E4C30(s32, f32 *);                  /* extern */
M2C_UNK func_00956A80(s32, s32);                    /* extern */
M2C_UNK func_00971A80(s32, f32, f32);               /* extern */
M2C_UNK func_009737C0(s32, s32);                    /* extern */
M2C_UNK func_00973B80(s32, f32, f32);               /* extern */
M2C_UNK func_00973C70(s32, f32 *);                  /* extern */
M2C_UNK func_00B0A8F0(s32);                         /* extern */

void func_00B0A4E0(u8 arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    f32 sp70;
    f32 sp74;
    M2C_UNK32 sp78;
    M2C_UNK32 sp7C;
    f32 var_f20;
    f32 var_f21;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s2;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 == 1) {
            var_f20 = 0.0f;
            sp70 = M2C_FIELD(temp_v0, f32 *, 0x580);
            sp74 = M2C_FIELD(temp_v0, f32 *, 0x584);
            sp78 = M2C_FIELD(temp_v0, M2C_UNK32 *, 0x588);
            sp7C = M2C_FIELD(temp_v0, M2C_UNK32 *, 0x58C);
            var_f21 = sp74;
            sp60 = M2C_FIELD(temp_v0, f32 *, 0x590) + sp70;
            sp64 = M2C_FIELD(temp_v0, f32 *, 0x594) + var_f21;
            sp68 = M2C_FIELD(temp_v0, f32 *, 0x5A0);
            sp6C = 0;
            if (M2C_FIELD(temp_v0, u8 *, 0x5A4) != 1) {
                var_f20 = sp70;
            } else {
                var_f21 = 0.0f;
            }
            var_s1 = 0;
        } else {
            sp70 = 0.0f;
            var_f20 = 0.0f;
            sp74 = 0.0f;
            sp78 = 0;
            sp7C = 0;
            sp60 = M2C_FIELD(temp_v0, f32 *, 0x590);
            sp64 = M2C_FIELD(temp_v0, f32 *, 0x594);
            sp68 = M2C_FIELD(temp_v0, f32 *, 0x5A0);
            sp6C = 0;
            if (M2C_FIELD(temp_v0, u8 *, 0x5A4) != 0) {
                var_f20 = -1.0f * M2C_FIELD(temp_v0, f32 *, 0x580);
                var_f21 = -1.0f * M2C_FIELD(temp_v0, f32 *, 0x584);
            } else {
                var_f21 = 0.0f;
            }
            var_s1 = 1;
        }
        if (M2C_FIELD(temp_v0, u8 *, 0x5A4) != temp_v1) {
            M2C_FIELD(temp_v0, u8 *, 0x5A4) = arg0;
            if (M2C_FIELD(temp_v0, u8 *, 0xC0C) == 6) {
                M2C_FIELD(temp_v0, s8 *, 0x5A5) = 2;
            }
        }
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x56C), &sp70);
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x5A8), &sp70);
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x650), &sp70);
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x654), &sp70);
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x79C), &sp70);
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x788), &sp70);
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x898), &sp70);
        func_002E4C30(M2C_FIELD(temp_v0, s32 *, 0x57C), &sp60);
        var_s3 = 0;
        var_s2 = temp_v0;
        do {
            func_00973B80(M2C_FIELD(var_s2, s32 *, 0x890), var_f20, var_f21);
            var_s3 += 1;
            var_s2 += 4;
        } while (var_s3 < 2);
        func_00971A80(M2C_FIELD(temp_v0, s32 *, 0x578), var_f20, var_f21);
        temp_v0_2 = func_00B15370();
        if ((temp_v0_2 != 0) && ((temp_s1 = var_s1 & 0xFF, func_00B0A8F0(temp_s1), temp_a0 = M2C_FIELD(temp_v0_2, s32 *, 0xC34), (temp_a0 == 2)) || (temp_a0 == 3) || (temp_a0 == 6))) {
            func_009737C0(M2C_FIELD(temp_v0_2, s32 *, 0x33C), temp_s1);
            func_00956A80(M2C_FIELD(temp_v0_2, s32 *, 0x338), temp_s1);
        }
    }
}
