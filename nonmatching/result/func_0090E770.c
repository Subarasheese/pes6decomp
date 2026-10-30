/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F3D30(void *, void *);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001F3D80(void *, f32 *, M2C_UNK);      /* extern */

s32 func_0090E770(void *arg0) {
    f32 sp50;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    s32 var_a0;
    s32 var_s2;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    void *temp_s0;
    void *var_s1;

    if ((s32) M2C_FIELD(arg0, u16 *, 0x5C) >= 0x201) {
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) - (2.0f + M2C_FIELD(arg0, f32 *, 0x54) + M2C_FIELD(arg0, f32 *, 0x58)));
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x58) = 0.0f;
        temp_a0 = M2C_FIELD(arg0, u16 *, 0x5C);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x50);
        if (temp_f1 < (f32) -(s32) temp_a0) {
            if ((s32) temp_a0 < 0) {
                var_f0 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
            } else {
                var_f0 = (f32) temp_a0;
            }
            var_f0_2 = temp_f1 + var_f0;
            goto block_15;
        }
        if (!(temp_f1 <= 0.0f)) {
            if ((s32) temp_a0 < 0) {
                var_f0_3 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
            } else {
                var_f0_3 = (f32) temp_a0;
            }
            var_f0_2 = temp_f1 - var_f0_3;
block_15:
            M2C_FIELD(arg0, f32 *, 0x50) = var_f0_2;
        }
    }
    var_s2 = 0;
    var_s1 = arg0;
    do {
        temp_s0 = var_s1 + 8;
        func_001F3D30(M2C_FIELD(var_s1, void **, 8), &sp50);
        temp_v0 = M2C_FIELD(temp_s0, u16 *, 4);
        if ((s32) temp_v0 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
        } else {
            var_f1 = (f32) temp_v0;
        }
        sp50 = var_f1 + M2C_FIELD(arg0, f32 *, 0x50);
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 6);
        if ((s32) temp_v0_2 < 0) {
            var_f2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f2 = (f32) temp_v0_2;
        }
        if ((sp50 + var_f2) < 0.0f) {
            temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x5C);
            if ((s32) temp_v0_3 < 0) {
                var_f1_2 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
            } else {
                var_f1_2 = (f32) temp_v0_3;
            }
            sp50 += var_f1_2;
        }
        func_001F3D80(M2C_FIELD(var_s1, void **, 8), &sp50, 0);
        temp_v0_4 = M2C_FIELD(temp_s0, u16 *, 6);
        var_a0 = 0;
        if ((s32) temp_v0_4 >= 0) {
            var_f0_4 = (f32) temp_v0_4;
        } else {
            var_f0_4 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
        }
        if (((sp50 + var_f0_4) > 0.0f) && (sp50 < 512.0f)) {
            var_a0 = 1;
        }
        func_001F3D10((s32) M2C_FIELD(var_s1, void **, 8), var_a0 & 0xFF);
        var_s2 += 1;
        var_s1 += 8;
    } while (var_s2 < 9);
    return 0;
}
