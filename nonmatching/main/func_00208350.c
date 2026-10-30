/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
extern f32 *D_003E74CC;

void func_00208350(void *arg0, u16 arg1, f32 fparg0) {
    f32 temp_f1;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    u16 temp_a0_3;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x30);
    temp_a0 = arg1 & 0xFFFF;
    if (temp_v1 != temp_a0) {
        if (temp_v1 != temp_a0) {
            M2C_FIELD(arg0, s8 *, 0x50) = 1;
        }
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
        M2C_FIELD(arg0, u16 *, 0x30) = arg1;
        if (!(fparg0 >= 2.1474836e9f)) {
            var_a0 = (s32) fparg0;
        } else {
            var_a0 = (s32) (fparg0 - 2.1474836e9f) | 0x80000000;
        }
        temp_a0_2 = var_a0 & 0xFFFF;
        if (temp_a0_2 >= 0) {
            var_f0 = (f32) temp_a0_2;
        } else {
            var_f0 = 2.0f * (f32) (((u32) temp_a0_2 >> 1) | (temp_a0_2 & 1));
        }
        M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
        M2C_FIELD(arg0, s16 *, 0x34) = 0;
        M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
        temp_a0_3 = M2C_FIELD(arg0, u16 *, 0x30);
        if ((s32) temp_a0_3 < 0x59A) {
            goto block_9;
        }
        if (M2C_FIELD(&D_003E74CC[arg1 & 0xFFFF], s32 *, 0x178C) != 0) {
block_9:
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
            if (!(temp_f1 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0_3 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1 < 0.0f)) {
                M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
            }
        }
        func_00207390(arg0, 4);
    }
}
