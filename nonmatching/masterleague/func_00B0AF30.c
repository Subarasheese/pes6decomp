/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B15370(void);
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973B80(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_00973BF0(void *, f32 *, M2C_UNK, f32); /* extern */
M2C_UNK func_0097FA10(s32, s32, s16, f32);          /* extern */
s32 func_00B15290(u8);                              /* extern */
s32 func_00B27200(s32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_00B0AF30(void) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 temp_f20;
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1_2;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s0;
    u32 var_s1;
    u8 temp_v1;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        temp_f20 = (f32) (M2C_FIELD(temp_v0, s16 *, 0xC12) * M2C_FIELD(temp_v0, u8 *, 0xC1A)) * -1.0f;
        func_00973B80(M2C_FIELD(temp_v0, s32 *, 0x32C), 0, temp_f20);
        var_s3 = 0;
        var_s1 = temp_v0;
        var_s0 = temp_v0;
        do {
            sp60 = M2C_FIELD(var_s1, f32 *, 0x354);
            sp64 = M2C_FIELD(var_s1, f32 *, 0x358);
            sp68 = M2C_FIELD(var_s1, f32 *, 0x35C);
            sp6C = M2C_FIELD(var_s1, f32 *, 0x360);
            func_00973BF0(M2C_FIELD(var_s0, void **, 0x10), &sp60, 0, temp_f20);
            func_00973BF0(M2C_FIELD(var_s0, void **, 0x190), &sp60, 0, temp_f20);
            func_00973BF0(M2C_FIELD(var_s0, void **, 0x210), &sp60, 0, temp_f20);
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xC1A);
            if ((var_s3 + 1) >= (s32) temp_v1) {
                if ((temp_v1 + 0xB) < var_s3) {
                    goto block_5;
                }
                temp_a0 = var_s3 + (M2C_FIELD(temp_v0, u8 *, 0xC0A) << 5);
                if ((temp_a0 >= (s32) M2C_FIELD(temp_v0, u16 *, 0xC08)) || !(func_00B27200(temp_a0) & 0xFFFF)) {
                    if ((func_0094C7B0() == 0x12) && (M2C_FIELD(temp_v0, s32 *, 0xC34) == 4)) {
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x10), 1);
                    } else {
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x10), 0);
                    }
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0x190), 0);
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0x210), 0);
                    func_009737C0(M2C_FIELD(var_s0, s32 *, 0x110), 0);
                } else {
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0x10), 1);
                    temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0xC30);
                    switch (temp_v1_2) {            /* irregular */
                    case 0:
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x190), 0);
                        func_009737C0(M2C_FIELD(var_s0, s32 *, 0x110), 1);
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x210), 0);
                        break;
                    case 1:
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x190), 1);
                        func_009737C0(M2C_FIELD(var_s0, s32 *, 0x110), 0);
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x210), 0);
                        break;
                    case 2:
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x190), 0);
                        func_009737C0(M2C_FIELD(var_s0, s32 *, 0x110), 0);
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x210), 1);
                        break;
                    }
                }
            } else {
block_5:
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x10), 0);
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x190), 0);
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x210), 0);
                func_009737C0(M2C_FIELD(var_s0, s32 *, 0x110), 0);
            }
            var_s3 += 1;
            var_s1 += 0x10;
            var_s0 += 4;
        } while (var_s3 < 0x20);
        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0xC12);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0xC1A) * temp_a2;
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x350), temp_a1, temp_a2, (f32) (temp_a1 - M2C_FIELD(temp_v0, s16 *, 0xC16)) / (((f32) func_00B15290(M2C_FIELD(temp_v0, u8 *, 0xC0A)) - 11.0f) * (f32) temp_a2));
    }
}
