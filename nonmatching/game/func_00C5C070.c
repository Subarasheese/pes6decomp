/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C4960(u32, s8);
extern void * func_00C13280(void *);
extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
s32 func_002C4B50(void *, s32);                     /* extern */
u32 func_002C6130(void *);                          /* extern */
u32 func_00C13640(u32, M2C_UNK *, M2C_UNK);         /* extern */
extern char D_00CB4A28[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74], gap at: 0x8. */
s32 func_00C5C070(u32 arg0, u32 arg1, s32 arg2, s32 (*arg3)(s8 *, u32, u16)) {
    s8 sp80;
    s32 sp84;
    f32 sp88;
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    f32 sp9C;
    f32 temp_f20;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s2;
    s32 var_s5;
    s8 temp_a1;
    u16 temp_a2;
    u16 temp_a3;
    u32 temp_a1_4;
    u32 temp_v0;
    u32 var_s3;
    u32 var_s4;

    var_s5 = 0;
    var_s3 = -1U;
    if ((arg0 != -1U) && (arg1 != -1U)) {
        var_s3 = arg1;
        if (arg1 < arg0) {
            goto block_3;
        }
loop_5:
        if (((func_00C132C0((void *) var_s3) & 0xFF) != 0xA) || ((arg2 & 0xFF) != (func_00C132B0((void *) var_s3) & 0xFF))) {
            var_s3 = func_00C137B0(var_s3);
            if (var_s3 < arg0) {
block_3:
                var_s3 = -1U;
            } else {
                goto loop_5;
            }
        }
    }
    if (var_s3 != -1U) {
        temp_v0 = func_002C6130((void *) var_s3);
        if (temp_v0 != -1U) {
            temp_s2 = arg2 & 0xFF;
            var_s4 = var_s3;
            temp_f20 = (f32) func_002C4B50((void *) var_s3, (temp_s2 >> 5) & 1);
loop_12:
            var_s4 = func_00C13640(var_s4, ((void *)D_00CB4A28), 4);
            if (var_s4 < temp_v0) {
                temp_a1 = func_00C132B0((void *) var_s4) & 0xFF;
                if ((temp_a1 != temp_s2) && (temp_a1 != -1)) {
                    sp80 = temp_a1;
                    sp84 = func_002C4960(var_s4, temp_a1);
                    temp_a3 = M2C_FIELD(func_00C13280((void *) var_s3), u16 *, 2);
                    temp_a1_2 = (s32) temp_a3 % 312;
                    sp8C = 0;
                    sp88 = temp_f20 * ((86.59164f * (f32) temp_a1_2) - 13465.0f);
                    sp90 = temp_f20 * ((83.5311f * (f32) ((temp_a3 / 312) + (temp_a3 >> 0x1F))) - 8729.0f);
                    temp_a2 = M2C_FIELD(func_00C13280((void *) var_s4), u16 *, 2);
                    temp_a1_3 = (s32) temp_a2 % 312;
                    sp98 = 0;
                    sp94 = temp_f20 * ((86.59164f * (f32) temp_a1_3) - 13465.0f);
                    temp_a1_4 = temp_a2 >> 0x1F;
                    sp9C = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_4)) - 8729.0f);
                    var_s5 = arg3(&sp80, temp_a1_4, temp_a2);
                } else {
                    goto loop_12;
                }
            }
        }
    }
    return var_s5;
}
