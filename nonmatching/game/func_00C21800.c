/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10(u8, u8);                          /* extern */
s32 func_00C17E60(M2C_UNK);                         /* extern */
extern char D_00CCAF80[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_00C21800(void *arg0) {
    M2C_UNK *var_a0;
    f32 *temp_v0;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f20;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v1;
    u8 temp_s0;
    void *var_s1;

    temp_s0 = M2C_FIELD(arg0, u8 *, 0x300);
    var_f20 = 0.0f;
    var_s2 = 0;
    if ((s32) temp_s0 > 0) {
        var_s1 = arg0;
        do {
            temp_v1 = func_00C17E10(M2C_FIELD(var_s1, u8 *, 2), M2C_FIELD(var_s1, u8 *, 3)) & 0xFF;
            if (temp_v1 < 0x12) {
                temp_v0 = ((void *)D_00CCAF80) + (M2C_FIELD(var_s1, u8 *, 2) * 0x48) + (temp_v1 * 4);
                *temp_v0 += M2C_FIELD(var_s1, f32 *, 4);
            }
            var_s2 += 1;
            var_s1 += 8;
        } while (var_s2 < (s32) temp_s0);
    }
    var_v1 = 0;
    var_a0 = ((void *)D_00CCAF80);
    do {
        var_v1 += 6;
        temp_f3 = M2C_FIELD(var_a0, f32 *, 0x10);
        temp_f2 = M2C_FIELD(var_a0, f32 *, 0x58);
        temp_f1 = M2C_FIELD(var_a0, f32 *, 0x14);
        temp_f0 = M2C_FIELD(var_a0, f32 *, 0x5C);
        temp_f4 = var_f20 + M2C_FIELD(var_a0, f32 *, 0) + M2C_FIELD(var_a0, f32 *, 0x48) + M2C_FIELD(var_a0, f32 *, 4) + M2C_FIELD(var_a0, f32 *, 0x4C) + M2C_FIELD(var_a0, f32 *, 8) + M2C_FIELD(var_a0, f32 *, 0x50) + M2C_FIELD(var_a0, f32 *, 0xC) + M2C_FIELD(var_a0, f32 *, 0x54);
        var_a0 += 0x18;
        var_f20 = temp_f4 + temp_f3 + temp_f2 + temp_f1 + temp_f0;
    } while (var_v1 < 0x12);
    temp_s0_2 = func_00C17E60(0) & 0xFF;
    M2C_FIELD(((void *)D_00CCAF80), f32 *, 0x94) = (f32) (var_f20 / (f32) (temp_s0_2 + (func_00C17E60(1) & 0xFF)));
}
