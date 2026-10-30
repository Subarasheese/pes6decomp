/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern f32 *D_003E74CC;

void func_00209A00(void *arg0, u16 arg1, s32 arg2) {
    f32 temp_f1;
    f32 var_f0;
    u16 temp_a1;

    if (M2C_FIELD(arg0, u16 *, 0x30) != (arg1 & 0xFFFF)) {
        M2C_FIELD(arg0, s8 *, 0x50) = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
    M2C_FIELD(arg0, u16 *, 0x30) = arg1;
    if (arg2 >= 0) {
        var_f0 = (f32) arg2;
    } else {
        var_f0 = 2.0f * (f32) (((u32) arg2 >> 1) | (arg2 & 1));
    }
    M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x30);
    if ((s32) temp_a1 >= 0x59A) {
        if (M2C_FIELD(&D_003E74CC[arg1 & 0xFFFF], s32 *, 0x178C) == 0) {
            return;
        }
        goto block_7;
    }
block_7:
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
    if (!(temp_f1 <= (f32) M2C_FIELD(&D_003E74CC[temp_a1 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1 < 0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    }
}
