/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132B0(void *);
s32 func_002C4B50(void *, s32);                     /* extern */
void *func_00C13110(M2C_UNK *);                     /* extern */
void *func_00C13280(void *);                        /* extern */
void *func_00C136E0(void *, M2C_UNK);               /* extern */
extern M2C_UNK func_00C12860;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74], gap at: 0x8. */
s32 func_00C5ADD0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    f32 sp80;
    s32 sp84;
    f32 sp88;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s4;
    u16 temp_a2;
    u32 temp_a1_2;
    void *temp_v0;
    void *var_s3;

    var_s4 = 0;
    var_s3 = (void *)-1;
    temp_s0 = arg2 & 0xFF;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v0 = func_00C13110(&func_00C12860);
        if ((temp_v0 != (void *)-1) && ((temp_v1 = M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 3, (temp_v1 == 3)) || (temp_v1 == 1))) {
            var_s3 = func_00C136E0(temp_v0, 7);
        }
        if ((var_s3 != (void *)-1) && (temp_s0 == (func_00C132B0(var_s3) & 0xFF))) {
            temp_f20 = (f32) func_002C4B50(var_s3, (temp_s0 >> 5) & 1);
            temp_a2 = M2C_FIELD(func_00C13280(var_s3), u16 *, 2);
            temp_a1 = (s32) temp_a2 % 312;
            sp84 = 0;
            sp80 = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f);
            temp_a1_2 = temp_a2 >> 0x1F;
            sp88 = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f);
            var_s4 = arg3(&sp80, temp_a1_2, temp_a2);
        }
    }
    return var_s4;
}
