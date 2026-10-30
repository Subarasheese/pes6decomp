/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern f32 *D_003E74CC;

void func_00207780(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    f32 var_f0;
    f32 var_f1;
    f32 var_f2;
    s32 temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) M2C_FIELD(arg0, u16 *, 0x52);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
    M2C_FIELD(arg0, u16 *, 0x44) = (u16) M2C_FIELD(arg0, u16 *, 0x58);
    M2C_FIELD(arg0, u8 *, 0x46) = (u8) M2C_FIELD(arg0, u8 *, 0x5A);
    M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
    M2C_FIELD(arg0, s16 *, 0x30) = arg1;
    if (arg2 >= 0) {
        var_f0 = (f32) arg2;
    } else {
        var_f0 = 2.0f * (f32) (((u32) arg2 >> 1) | (arg2 & 1));
    }
    M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    temp_a0 = ((u32) (arg3 & 0xFF & 0xFF) / (u32) (s32) *D_003E74CC) & 0xFF;
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
}
