/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00297D40(void *);
extern s32 func_00297D90(void *, s32);
extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
s32 func_00C036F0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0 = M2C_FIELD(arg0, void **, 0xC);
        temp_a0 = M2C_FIELD(temp_s0, void **, 4);
        if (M2C_FIELD(temp_a0, f32 *, 0x38) > 1.0f) {
            if ((func_00207D10(temp_a0) != 0) && !(arg2 & 0xFFFF)) {
                goto block_8;
            }
            if (func_00207D10(M2C_FIELD(temp_s0, void **, 4)) == 0) {
                if (func_00207D80(M2C_FIELD(temp_s0, void **, 4), arg2 & 0xFFFF) != 0) {
                    goto block_8;
                }
                goto block_27;
            }
block_8:
            M2C_FIELD(temp_s0, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x4E) + 1);
            if (M2C_FIELD(temp_s0, u8 *, 0x4E) == (arg3 & 0xFFFF)) {
                M2C_FIELD(temp_s0, u8 *, 0x4E) = 0U;
                return 1;
            }
            if (arg1 < 0) {
                var_f0 = 2.0f * (f32) (((u32) arg1 >> 1) | (arg1 & 1));
            } else {
                var_f0 = (f32) arg1;
            }
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) = var_f0;
            goto block_27;
        }
block_27:
    default:
        return 0;
    case 1:
        temp_s0_2 = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(temp_s0_2, f32 *, 0x34) > 1.0f) {
            if ((func_00297D40(temp_s0_2) != 0) && !(arg2 & 0xFFFF)) {
                goto block_19;
            }
            if (func_00297D40(temp_s0_2) == 0) {
                if (func_00297D90(temp_s0_2, arg2 & 0xFFFF) != 0) {
                    goto block_19;
                }
                goto block_27;
            }
block_19:
            M2C_FIELD(temp_s0_2, u8 *, 0x38) = (u8) (M2C_FIELD(temp_s0_2, u8 *, 0x38) + 1);
            if (M2C_FIELD(temp_s0_2, u8 *, 0x38) == (arg3 & 0xFFFF)) {
                M2C_FIELD(temp_s0_2, u8 *, 0x38) = 0U;
                return 1;
            }
            if (arg1 < 0) {
                var_f0_2 = 2.0f * (f32) (((u32) arg1 >> 1) | (arg1 & 1));
            } else {
                var_f0_2 = (f32) arg1;
            }
            M2C_FIELD(temp_s0_2, f32 *, 0x34) = var_f0_2;
            goto block_27;
        }
        goto block_27;
    }
}
