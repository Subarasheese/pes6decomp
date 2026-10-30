/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
M2C_UNK func_001F3D80(s32, f32 *, M2C_UNK);         /* extern */

void func_00B97CF0(void *arg0) {
    f32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    f32 spB0;
    f32 spB4;
    s32 spB8;
    s32 spBC;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f5;
    f32 var_f6;
    s32 temp_a0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    var_s7 = 0;
    var_s6 = 0;
    var_s4 = 0;
    var_s2 = 0;
    var_s1 = 0;
    do {
        if (var_s4 != 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 4) + (M2C_FIELD(arg0, u8 *, 0x3E) * 0x52) + var_s2;
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x74);
            if ((s32) temp_v1 < 0) {
                var_f5 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
            } else {
                var_f5 = (f32) temp_v1;
            }
            temp_v1_2 = M2C_FIELD(temp_a1, u8 *, 0x75);
            if ((s32) temp_v1_2 < 0) {
                var_f6 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
            } else {
                var_f6 = (f32) temp_v1_2;
            }
        } else {
            var_f5 = 2.0f;
            var_f6 = 52.0f;
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0) + var_s1;
        temp_f21 = (var_f6 * (M2C_FIELD(arg0, f32 *, 0x34) - 1.0f)) / 104.0f;
        temp_f20 = (var_f5 * (M2C_FIELD(arg0, f32 *, 0x30) - 1.0f)) / 48.0f;
        if (M2C_FIELD(temp_a0, f32 *, 0x1C8) == temp_f20) {
            if (M2C_FIELD(temp_a0, f32 *, 0x1CC) != temp_f21) {
                goto block_18;
            }
        } else {
block_18:
            var_s3 = 0;
            M2C_FIELD(temp_a0, f32 *, 0x1C8) = temp_f20;
            var_s0 = 0;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s1), f32 *, 0x1CC) = temp_f21;
            do {
                temp_a0_2 = M2C_FIELD((var_s6 + M2C_FIELD(arg0, s32 *, 0) + var_s0), void **, 0x38);
                if (temp_a0_2 != NULL) {
                    spB8 = 0;
                    spB0 = temp_f20;
                    spBC = 0;
                    spB4 = temp_f21;
                    func_001EF860(temp_a0_2, &spB0);
                }
                var_s3 += 1;
                var_s0 += 4;
            } while (var_s3 < 9);
            temp_a0_3 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s7), s32 *, 0xC);
            if (temp_a0_3 != 0) {
                spA8 = 0x41F00000;
                spAC = 0x41500000;
                spA0 = temp_f20;
                spA4 = temp_f21;
                func_001F3D80(temp_a0_3, &spA0, 0);
            }
        }
        var_s4 += 1;
        var_s2 += 2;
        var_s1 += 8;
        var_s6 += 0x24;
        var_s7 += 4;
    } while (var_s4 < 0xB);
}
