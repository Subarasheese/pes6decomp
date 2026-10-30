/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern u32 func_00B035D0(void);
M2C_UNK func_00973B80(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_0097FA10(s32, s32, s16, f32);          /* extern */
M2C_UNK func_00AF8E60();                            /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */
s32 func_00B01540(u8);                              /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_00AF96F0(void) {
    f32 temp_f20;
    s16 temp_a2;
    s32 temp_a1;
    s32 temp_s0;
    s32 var_s4;
    u32 temp_v0;
    u32 var_s2;
    u8 temp_v1;
    void *temp_s1;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        var_s4 = 0;
        var_s2 = temp_v0;
        temp_f20 = (f32) M2C_FIELD(temp_v0, s16 *, 0x5CE);
        do {
            func_00973B80(M2C_FIELD(var_s2, void **, 0x10), 0, temp_f20);
            func_00973B80(M2C_FIELD(var_s2, void **, 0x1EC), 0, temp_f20);
            func_00973B80(M2C_FIELD(var_s2, void **, 0x6C), 0, temp_f20);
            func_00973B80(M2C_FIELD(var_s2, void **, 0x124), 0, temp_f20);
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5D0);
            if ((var_s4 + 1) >= (s32) temp_v1) {
                if ((temp_v1 + 0xB) < var_s4) {
                    goto block_5;
                }
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x10), 1);
                temp_s1 = temp_v0 + ((func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), var_s4 & 0xFF) & 0xFFFF) * 0x1C);
                temp_s0 = M2C_FIELD(temp_s1, s32 *, 0xA10);
                if (temp_s0 != -1) {
                    if (M2C_FIELD(temp_v0, s32 *, 0x29F98) == 1) {
                        func_001D7D80(M2C_FIELD(var_s2, void **, 0x124), 0xC);
                        func_001D7D60(M2C_FIELD(var_s2, void **, 0x124), 1);
                        func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 0);
                    } else {
                        func_001D7D80(M2C_FIELD(var_s2, void **, 0x124), (s16) ((s64) ((s64) temp_s0 << 0x30) >> 0x30));
                        func_001D7D60(M2C_FIELD(var_s2, void **, 0x124), 1);
                        if ((temp_s0 % 3) == 0) {
                            func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 1);
                        } else {
                            func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 0);
                        }
                        func_001D7D80(M2C_FIELD(var_s2, void **, 0x1EC), (s16) ((s64) ((s64) M2C_FIELD(temp_s1, u8 *, 0xA14) << 0x30) >> 0x30));
                    }
                } else if (M2C_FIELD(temp_v0, s32 *, 0x29F98) != 1) {
                    func_001D7D60(M2C_FIELD(var_s2, void **, 0x124), 1);
                    func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 1);
                }
            } else {
block_5:
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x10), 0);
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 0);
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x124), 0);
            }
            var_s4 += 1;
            var_s2 += 4;
        } while (var_s4 < 0x17);
        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x5C8);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x5D0) * temp_a2;
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x274), temp_a1, temp_a2, (f32) (temp_a1 - M2C_FIELD(temp_v0, s16 *, 0x5CC)) / (((f32) func_00B01540(M2C_FIELD(temp_v0, u8 *, 0x5C4)) - 11.0f) * (f32) temp_a2));
        func_00AF8E60();
    }
}
