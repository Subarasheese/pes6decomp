/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_00207D80(void *, s32);
extern s32 func_00297D40(void *);
extern s32 func_00297D90(void *, s32);
extern s32 func_00207D10(void *);
s32 func_00C038E0(void *arg0) {
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_v1) {                              /* irregular */
    case 1:
        temp_s1 = M2C_FIELD(arg0, void **, 0xC);
        temp_s0 = (M2C_FIELD(func_00208310((s32) M2C_FIELD(temp_s1, u16 *, 0x10)), u8 *, 1) * 2) & 0xFFFF;
        temp_s2 = (M2C_FIELD(func_00208310((s32) M2C_FIELD(temp_s1, u16 *, 0x10)), u8 *, 2) * 2) & 0xFFFF;
        if (M2C_FIELD(temp_s1, f32 *, 0x34) > 1.0f) {
            if ((func_00297D40(temp_s1) != 0) && !(temp_s2 & 0xFFFF)) {
                goto block_19;
            }
            if (func_00297D40(temp_s1) == 0) {
                if (func_00297D90(temp_s1, temp_s2 & 0xFFFF) != 0) {
                    goto block_19;
                }
                goto block_25;
            }
block_19:
            if (temp_s0 < 0) {
                var_f0 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
            } else {
                var_f0 = (f32) temp_s0;
            }
            M2C_FIELD(temp_s1, f32 *, 0x34) = var_f0;
            return 1;
        }
block_25:
    default:
        return 0;
    case 0:
        temp_s1_2 = M2C_FIELD(arg0, void **, 0xC);
        temp_a0 = M2C_FIELD(temp_s1_2, void **, 4);
        temp_v0 = M2C_FIELD(temp_a0, void **, 4);
        temp_s0_2 = (M2C_FIELD(temp_v0, u8 *, 1) * 2) & 0xFFFF;
        temp_s2_2 = (M2C_FIELD(temp_v0, u8 *, 2) * 2) & 0xFFFF;
        if (M2C_FIELD(temp_a0, f32 *, 0x38) > 1.0f) {
            if ((func_00207D10(temp_a0) != 0) && !(temp_s2_2 & 0xFFFF)) {
                goto block_10;
            }
            if (func_00207D10(M2C_FIELD(temp_s1_2, void **, 4)) == 0) {
                if (func_00207D80(M2C_FIELD(temp_s1_2, void **, 4), temp_s2_2 & 0xFFFF) != 0) {
                    goto block_10;
                }
                goto block_25;
            }
block_10:
            if (temp_s0_2 < 0) {
                var_f0_2 = 2.0f * (f32) (((u32) temp_s0_2 >> 1) | (temp_s0_2 & 1));
            } else {
                var_f0_2 = (f32) temp_s0_2;
            }
            M2C_FIELD(M2C_FIELD(temp_s1_2, void **, 4), f32 *, 0x38) = var_f0_2;
            return 1;
        }
        goto block_25;
    }
}
