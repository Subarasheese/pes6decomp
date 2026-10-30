/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
s32 func_00207AC0(s32, s32, M2C_UNK, f32);          /* extern */
extern f32 *D_003E74CC;

void func_00209420(void *arg0, u16 arg1, s32 arg2) {
    f32 temp_f1;
    s32 var_s0;
    u16 temp_a0;

    var_s0 = arg2;
    if (var_s0 >= 0x2711) {
        var_s0 = 0x2710;
    }
    if (M2C_FIELD(arg0, u16 *, 0x30) != (arg1 & 0xFFFF)) {
        M2C_FIELD(arg0, s8 *, 0x50) = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
    M2C_FIELD(arg0, u16 *, 0x30) = arg1;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x30);
    if ((s32) temp_a0 >= 0x59A) {
        if (M2C_FIELD(&D_003E74CC[arg1 & 0xFFFF], s32 *, 0x178C) != 0) {
            goto block_8;
        }
    } else {
block_8:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
        if (!(temp_f1 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1 < 0.0f)) {
            M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) func_00207AC0(arg1 & 0xFFFF, var_s0, 1, M2C_FIELD(arg0, f32 *, 0x28));
}
