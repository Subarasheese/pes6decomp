/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
s32 func_00207AC0(s32, s32, u64, f32);              /* extern */
extern f32 *D_003E74CC;

void func_00208610(void *arg0) {
    f32 temp_f1;
    u16 temp_a0;
    u16 temp_s0;
    u16 var_s2;
    u64 temp_s1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    var_s2 = M2C_FIELD(temp_v1, u16 *, 4);
    temp_s0 = M2C_FIELD(temp_v1, u16 *, 6);
    if ((s32) var_s2 >= 0x2711) {
        var_s2 = (u16) ((s32) var_s2 % 10000);
    }
    temp_s1 = (u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0) << 0x38) >> 0x3F;
    if (M2C_FIELD(arg0, u16 *, 0x30) != (temp_s0 & 0xFFFF)) {
        M2C_FIELD(arg0, s8 *, 0x50) = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
    M2C_FIELD(arg0, u16 *, 0x30) = temp_s0;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, void **, 4) = func_00208310(temp_s0 & 0xFFFF);
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x30);
    if ((s32) temp_a0 >= 0x59A) {
        if (M2C_FIELD(&D_003E74CC[temp_s0 & 0xFFFF], s32 *, 0x178C) != 0) {
            goto block_6;
        }
    } else {
block_6:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
        if (!(temp_f1 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1 < 0.0f)) {
            M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) func_00207AC0(temp_s0 & 0xFFFF, (s32) var_s2, temp_s1, M2C_FIELD(arg0, f32 *, 0x28));
}
