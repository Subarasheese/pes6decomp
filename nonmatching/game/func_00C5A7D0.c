/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C19F0(s32, s32, s32, M2C_UNK, s32);     /* extern */
s32 func_002C1BF0(s32, M2C_UNK);                    /* extern */
s32 func_002C4B50(s32, s32);                        /* extern */
s32 func_002C6130(s32);                             /* extern */
void *func_00C13280(s32);                           /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
s32 func_00C5A7D0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, s32, u32, u16)) {
    f32 sp70;
    s32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 sp80;
    u8 sp84;
    f32 temp_f20;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    u16 temp_a3;
    u32 temp_a2_2;
    u8 temp_v0_3;
    void *temp_v0_2;

    var_s1 = 0;
    temp_s0 = ((((s32) (arg2 & 0xFF) >> 5) & 1) ^ 1) & 0xFF;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v0 = func_002C19F0(arg0, arg1, temp_s0, 6, func_002C1BF0(temp_s0, 6));
        if ((temp_v0 != -1) && (func_002C6130(temp_v0) != -1)) {
            temp_f20 = (f32) func_002C4B50(temp_v0, temp_s0);
            temp_v0_2 = func_00C13280(temp_v0);
            temp_a3 = M2C_FIELD(temp_v0_2, u16 *, 2);
            temp_a2 = (s32) temp_a3 % 312;
            sp74 = 0;
            sp70 = temp_f20 * ((86.59164f * (f32) temp_a2) - 13465.0f);
            temp_a2_2 = temp_a3 >> 0x1F;
            temp_a1 = (temp_a3 / 312) + temp_a2_2;
            sp78 = temp_f20 * ((83.5311f * (f32) temp_a1) - 8729.0f);
            temp_a0 = M2C_FIELD(temp_v0_2, u8 *, 5) & 0x70;
            if ((temp_a0 != 0x60) && (temp_a0 != 0x50)) {
                sp80 = 0;
            } else {
                sp80 = 1;
            }
            sp84 = M2C_FIELD(temp_v0_2, u8 *, 4);
            temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 7);
            if ((s32) temp_v0_3 < 0) {
                var_f0 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
            } else {
                var_f0 = (f32) temp_v0_3;
            }
            sp7C = var_f0;
            var_s1 = arg3(&sp70, temp_a1, temp_a2_2, temp_a3);
        }
    }
    return var_s1;
}
