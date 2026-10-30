/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00AE3240(void);
M2C_UNK func_00973C70(void *, void *);              /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_0097FA10(s32, M2C_UNK);                /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74], gap at: 0x8. */
void func_00AE3D80(void) {
    f32 temp_f20;
    f32 var_f0;
    s32 temp_s0;
    s32 temp_s3_2;
    s32 temp_v0_3;
    s32 var_s2;
    u32 temp_v0;
    u8 temp_a0;
    u8 var_v1;
    void *temp_s3;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        temp_v0_2 = (M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0;
        temp_a0 = M2C_FIELD(temp_v0_2, u8 *, 0x128A);
        var_v1 = M2C_FIELD(temp_v0_2, u8 *, 0x1289);
        if ((s32) var_v1 < (s32) temp_a0) {
            var_v1 = temp_a0;
        }
        temp_s0 = var_v1 & 0xFF;
        var_s2 = 0;
        temp_f20 = (f32) (M2C_FIELD(temp_v0, s16 *, 0x5AE) * M2C_FIELD(temp_v0, u8 *, 0x5AC));
        do {
            temp_v0_3 = var_s2 & 0xFF;
            temp_v1 = temp_v0 + (temp_v0_3 * 0x10);
            temp_s3 = temp_v0 + (temp_v0_3 * 4);
            M2C_FIELD(temp_v1, f32 *, 0x324) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x324) + 0.0f);
            M2C_FIELD(temp_v1, f32 *, 0x328) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x328) + temp_f20);
            M2C_FIELD(temp_v1, f32 *, 0x404) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x404) + 0.0f);
            M2C_FIELD(temp_v1, f32 *, 0x408) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x408) + temp_f20);
            func_00973C70(M2C_FIELD(temp_s3, void **, 0x1D4), temp_v1 + 0x324);
            func_00973C70(M2C_FIELD(temp_s3, void **, 0x20C), temp_v1 + 0x404);
            temp_s3_2 = var_s2 & 0xFF;
            if ((temp_s3_2 >= 0) && (temp_s3_2 < 3)) {
                if (temp_s3_2 >= (s32) M2C_FIELD((temp_v0 + (M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314)), u8 *, 0x1289)) {
                    goto block_8;
                }
                func_001D7D60(M2C_FIELD(temp_s3, void **, 0x1D4), 1);
            } else {
block_8:
                func_001D7D60(M2C_FIELD(temp_s3, void **, 0x1D4), 0);
            }
            if ((temp_s3_2 >= 0) && (temp_s3_2 < 3)) {
                if (temp_s3_2 >= (s32) M2C_FIELD((temp_v0 + (M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314)), u8 *, 0x128A)) {
                    goto block_15;
                }
                func_001D7D60(M2C_FIELD(temp_s3, void **, 0x20C), 1);
            } else {
block_15:
                func_001D7D60(M2C_FIELD(temp_s3, void **, 0x20C), 0);
            }
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < 0xE);
        if (temp_s0 < 0) {
            var_f0 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
        } else {
            var_f0 = (f32) temp_s0;
        }
        func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x5A8), 0, 3.0f / var_f0);
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x5A8), 0);
    }
}
