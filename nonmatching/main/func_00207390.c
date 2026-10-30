/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern f32 *D_003E74CC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_00207390(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f0;
    f32 var_f1;
    f32 var_f2;
    s32 temp_a0;
    s32 temp_s1;
    s32 var_v1;
    u16 temp_s0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a2;

    temp_f20 = M2C_FIELD(arg0, f32 *, 0x28);
    temp_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10);
    M2C_FIELD(arg0, s8 *, 0x4D) = 1;
    M2C_FIELD(arg0, s8 *, 0x4E) = 1;
    if (M2C_FIELD(arg0, u8 *, 0x5C) == 0) {
        M2C_FIELD(arg0, u8 *, 0x5C) = 1U;
        M2C_FIELD(temp_a2, s8 *, 9) = (s8) (M2C_FIELD(temp_a2, s8 *, 9) ^ 1);
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
    if (!(temp_f1 >= 2.1474836e9f)) {
        var_v1 = (s32) temp_f1;
    } else {
        var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    }
    temp_s0 = M2C_FIELD(arg0, u16 *, 0x30);
    temp_s1 = var_v1 & 0xFFFF & 0xFFFF;
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) M2C_FIELD(arg0, u16 *, 0x52);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
    M2C_FIELD(arg0, u16 *, 0x44) = (u16) M2C_FIELD(arg0, u16 *, 0x58);
    M2C_FIELD(arg0, u8 *, 0x46) = (u8) M2C_FIELD(arg0, u8 *, 0x5A);
    M2C_FIELD(arg0, u32 *, 4) = func_00208310((s32) temp_s0);
    M2C_FIELD(arg0, u16 *, 0x30) = temp_s0;
    if (temp_s1 >= 0) {
        var_f0 = (f32) temp_s1;
    } else {
        var_f0 = 2.0f * (f32) (((u32) temp_s1 >> 1) | (temp_s1 & 1));
    }
    M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    temp_a0 = ((u32) (arg1 & 0xFF & 0xFF) / (u32) (s32) *D_003E74CC) & 0xFF;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x4C) < temp_a0) {
        M2C_FIELD(arg0, u8 *, 0x4C) = (u8) temp_a0;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x4C);
    if ((s32) temp_v1 < 0) {
        var_f1 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
    } else {
        var_f1 = (f32) temp_v1;
    }
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (1.0f / var_f1);
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x4C);
    if ((s32) temp_v1_2 < 0) {
        var_f2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
    } else {
        var_f2 = (f32) temp_v1_2;
    }
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + ((1.0f / var_f2) / 10.0f));
    M2C_FIELD(arg0, s8 *, 0x51) = 1;
    M2C_FIELD(arg0, f32 *, 0x28) = temp_f20;
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
}
