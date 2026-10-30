/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
void *func_002C19F0(s32, s32, s32, M2C_UNK, s32);   /* extern */
s32 func_002C1BF0(s32, M2C_UNK);                    /* extern */
s32 func_002C4B50(s32, s32);                        /* extern */
void *func_00C13280(void *);                        /* extern */
void *func_00C13390(void *);                        /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
s32 func_00C5ABB0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    s32 spB0;
    f32 spC0;
    s32 spC4;
    f32 spC8;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s0;
    u16 temp_a2;
    u32 temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    spB0 = 0;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_s3 = arg2 & 0xFF;
        temp_s4 = (temp_s3 >> 5) & 1;
        var_s0 = func_002C1BF0(temp_s4, 6);
        temp_f20 = (f32) func_002C4B50(arg1, temp_s4);
        if (var_s0 != 0) {
loop_4:
            temp_v0 = func_002C19F0(arg0, arg1, temp_s4, 6, var_s0);
            if (temp_v0 != (void *)-1) {
                if (!(M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 4)) {
                    temp_v0_2 = func_00C13390(temp_v0);
                    if ((temp_v0_2 != (void *)-1) && ((func_00C132C0(temp_v0_2) & 0xFF) == 0xB) && (temp_s3 == (func_00C132B0(temp_v0_2) & 0xFF)) && (temp_a2 = M2C_FIELD(func_00C13280(temp_v0_2), u16 *, 2), temp_a1 = (s32) temp_a2 % 312, spC4 = 0, spC0 = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f), temp_a1_2 = temp_a2 >> 0x1F, spC8 = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f), (arg3(&spC0, temp_a1_2, temp_a2) != 0))) {
                        spB0 = 1;
                    } else {
                        goto block_9;
                    }
                } else {
block_9:
                    var_s0 -= 1;
                    if (var_s0 == 0) {

                    } else {
                        goto loop_4;
                    }
                }
            }
        }
    }
    return spB0;
}
