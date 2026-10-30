/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_002C18C0(s32, M2C_UNK);                    /* extern */
s32 func_002C4B50(void *, s32);                     /* extern */
void *func_00C13280(void *);                        /* extern */
u32 func_00C13390(s32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74], gap at: 0x8. */
s32 func_00C5CC60(u32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(s32 *, u32, u16)) {
    s32 sp80;
    s32 sp84;
    f32 sp88;
    s32 sp8C;
    f32 sp90;
    f32 temp_f20;
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_v0;
    u16 temp_a2;
    u32 temp_a1_2;
    u32 var_s2;

    var_s3 = 0;
    temp_s1 = arg2 & 0xFF;
    temp_s0 = (temp_s1 >> 5) & 1;
    if ((arg0 == -1U) || (arg1 == -1) || (temp_v0 = func_002C18C0(temp_s0, 6), (temp_v0 == -1)) || (var_s2 = func_00C13390(temp_v0), (var_s2 == -1U)) || (arg0 >= var_s2) || ((func_00C132C0((void *) var_s2) & 0xFF) != 0xB) || ((temp_s0 & 0xFF) != (((s32) (func_00C132B0((void *) var_s2) & 0xFF) >> 5) & 1))) {
        var_s2 = -1U;
    }
    if ((var_s2 != -1U) && (temp_s1 == (func_00C132B0((void *) var_s2) & 0xFF))) {
        var_v1 = &sp80;
        var_v0 = 0x14;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        temp_v1 = M2C_FIELD(func_00C13280((void *) var_s2), u8 *, 5) & 0x70;
        switch (temp_v1) {                          /* irregular */
        case 48:
            sp84 = 1;
            break;
        case 32:
        case 16:
            sp80 = 1;
            break;
        }
        temp_f20 = (f32) func_002C4B50((void *) var_s2, temp_s0 & 0xFF);
        temp_a2 = M2C_FIELD(func_00C13280((void *) var_s2), u16 *, 2);
        temp_a1 = (s32) temp_a2 % 312;
        sp8C = 0;
        sp88 = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f);
        temp_a1_2 = temp_a2 >> 0x1F;
        sp90 = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f);
        var_s3 = arg3(&sp80, temp_a1_2, temp_a2);
    }
    return var_s3;
}
