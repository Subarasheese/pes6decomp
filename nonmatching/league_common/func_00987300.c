/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Sprite_SetPositionZ(void *, float);
extern void func_001D7D60(void *, s8);
extern u32 func_00989410(void);
extern f32 func_001D79A0(void *, u16);
M2C_UNK func_00973B80(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_0097FA10(s32, u8, s16, f32);           /* extern */

void func_00987300(s32 arg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f2;
    s16 temp_a2;
    s32 temp_s2;
    s32 temp_s7;
    s32 var_s0;
    s32 var_s5;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s3;
    u8 *temp_s0;
    u8 temp_a1;
    u8 temp_s6;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v0 = func_00989410();
    if (temp_v0 != 0) {
        temp_s2 = arg0 & 0xFF;
        temp_s6 = M2C_FIELD(temp_v0, u8 *, 0x472);
        temp_s7 = temp_s2 * 2;
        var_s5 = 0;
        var_s3 = temp_v0;
        temp_f21 = (f32) M2C_FIELD((temp_s7 + temp_v0), s16 *, 0x462);
        temp_s0 = temp_v0 + (temp_s2 * 4) + temp_s6 + 0x46A;
        do {
            func_00973B80(M2C_FIELD(var_s3, void **, 0xC), 0, temp_f21);
            temp_v1 = M2C_FIELD((temp_v0 + temp_s2), u8 *, 0x466);
            if (((var_s5 + 1) >= (s32) temp_v1) && ((temp_v1 + 8) >= var_s5)) {
                if (var_s5 >= (s32) *temp_s0) {
                    goto block_6;
                }
                func_001D7D60(M2C_FIELD(var_s3, void **, 0xC), 1);
            } else {
block_6:
                func_001D7D60(M2C_FIELD(var_s3, void **, 0xC), 0);
            }
            var_s5 += 1;
            var_s3 += 4;
        } while (var_s5 < 0x10);
        var_s0 = 0;
        var_s1 = temp_v0;
        do {
            temp_f20 = func_001D79A0(M2C_FIELD(var_s1, void **, 0xC), 0x15U);
            func_00973B80(M2C_FIELD(var_s1, void **, 0x4C), 0, temp_f21);
            Pes6Sprite_SetPositionZ(M2C_FIELD(var_s1, void **, 0x4C), temp_f20);
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < 0x10);
        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x458);
        temp_a1 = M2C_FIELD((temp_s2 + temp_v0), u8 *, 0x466);
        temp_v0_2 = M2C_FIELD(((temp_s6 & 0xFF) + ((temp_s2 * 4) + temp_v0)), u8 *, 0x46A);
        if ((s32) temp_v0_2 >= 0) {
            var_f2 = (f32) temp_v0_2;
        } else {
            var_f2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x250), temp_a1, temp_a2, (f32) ((temp_a1 * temp_a2) - M2C_FIELD((temp_s7 + temp_v0), s16 *, 0x45E)) / ((var_f2 - 8.0f) * (f32) temp_a2));
    }
}
