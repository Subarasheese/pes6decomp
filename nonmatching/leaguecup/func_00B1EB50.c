/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00973B80(void *, u8, M2C_UNK, f32);    /* extern */
M2C_UNK func_0097FA10(s32, s32, f32);               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_00B1EB50(void) {
    f32 temp_f20;
    f32 var_f2;
    s16 temp_a0;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    u8 temp_v1;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        var_s2 = 0;
        temp_f20 = (f32) M2C_FIELD(temp_v0, s16 *, 0x326);
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x2F9) > 0) {
            var_s0 = temp_v0;
            do {
                func_00973B80(M2C_FIELD(var_s0, void **, 4), M2C_FIELD(temp_v0, u8 *, 0x2F9), 0, temp_f20);
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x328);
                if (((var_s2 + 1) < (s32) temp_v1) || ((temp_v1 + 0xB) < var_s2)) {
                    func_001D7D60(M2C_FIELD(var_s0, void **, 4), 0);
                } else {
                    func_001D7D60(M2C_FIELD(var_s0, void **, 4), 1);
                }
                var_s2 += 1;
                var_s0 += 4;
            } while (var_s2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x2F9));
        }
        temp_a0 = M2C_FIELD(temp_v0, s16 *, 0x320);
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x2F9) >= 0) {
            var_f2 = (f32) (s32) M2C_FIELD(temp_v0, u8 *, 0x2F9);
        } else {
            var_f2 = 2.0f * (f32) (((u32) (s32) M2C_FIELD(temp_v0, u8 *, 0x2F9) >> 1) | ((s32) M2C_FIELD(temp_v0, u8 *, 0x2F9) & 1));
        }
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x2F4), (s32) M2C_FIELD(temp_v0, u8 *, 0x2F9), (f32) ((M2C_FIELD(temp_v0, u8 *, 0x328) * temp_a0) - M2C_FIELD(temp_v0, s16 *, 0x324)) / ((var_f2 - 11.0f) * (f32) temp_a0));
    }
}
