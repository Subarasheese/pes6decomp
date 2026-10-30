/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B28900(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973B80(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_0097FA10(s32, s32, s16, f32);          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_00B27B40(void) {
    f32 temp_f20;
    s16 temp_a2;
    s32 temp_a1;
    s32 var_s0;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s1;
    u8 temp_v1;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        temp_f20 = (f32) M2C_FIELD(temp_v0, s16 *, 0x190);
        func_00973B80(M2C_FIELD(temp_v0, void **, 8), 0, temp_f20);
        var_s3 = 0;
        var_s1 = temp_v0;
        var_s0 = 0;
        do {
            func_00973B80(M2C_FIELD(var_s1, void **, 0x100), 0, temp_f20);
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x194);
            if ((var_s3 + 1) >= (s32) temp_v1) {
                if ((temp_v1 + 0xF) < var_s3) {
                    goto block_5;
                }
                func_009737C0(M2C_FIELD(var_s1, s32 *, 0x10), 1);
                if (M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0) + var_s0), u8 *, 0x63) != 0) {
                    func_009737C0(M2C_FIELD(var_s1, s32 *, 0x88), 1);
                    if (var_s3 != 0x1D) {
                        func_001D7D60(M2C_FIELD(var_s1, void **, 0x100), 1);
                    }
                }
            } else {
block_5:
                func_009737C0(M2C_FIELD(var_s1, s32 *, 0x10), 0);
                func_009737C0(M2C_FIELD(var_s1, s32 *, 0x88), 0);
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x100), 0);
            }
            var_s3 += 1;
            var_s1 += 4;
            var_s0 += 4;
        } while (var_s3 < 0x1E);
        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x18E);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x194) * temp_a2;
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x184), temp_a1, temp_a2, (f32) (temp_a1 - M2C_FIELD(temp_v0, s16 *, 0x192)) / (f32) (temp_a2 * 0xF));
    }
}
