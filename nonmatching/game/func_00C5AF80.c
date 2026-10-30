/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C4960(u32, s8);
extern u8 func_00C132B0(void *);
s32 func_002C1DD0(u32, s32, s8, M2C_UNK, s32);      /* extern */
s32 func_002C1FD0(u32, s32, s8, M2C_UNK);           /* extern */
s32 func_002C4B50(s32, s32);                        /* extern */
void *func_00C13280(s32);                           /* extern */
u32 func_00C135B0(u32, M2C_UNK *, s32);             /* extern */
void *func_00C13640(s32, M2C_UNK *, s32);           /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
s32 func_00C5AF80(u32 arg0, s32 arg1, s8 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    s32 spB0;
    f32 spC0;
    s32 spC4;
    f32 spC8;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;
    u16 temp_a2;
    u32 temp_a1_2;
    u32 temp_v0;
    u32 var_s5;
    void *temp_v0_5;

    var_s5 = arg0;
    spB0 = 0;
    if ((var_s5 != -1U) && (arg1 != -1)) {
        temp_s0 = ((s32) (arg2 & 0xFF) >> 5) & 1;
        temp_s6 = (*(s32 *)D_00CB3468);
        temp_f20 = (f32) func_002C4B50(arg1, temp_s0);
        temp_v0 = func_00C135B0(var_s5, ((void *)D_00CB3450), (*(s32 *)D_00CB3468));
        if (temp_v0 != -1U) {
            var_s5 = temp_v0;
        }
        temp_v0_2 = func_002C4960(var_s5, arg2);
        if ((temp_v0_2 != 2) && (temp_v0_2 != 1) && (temp_v0_2 != 0)) {

        } else {
            temp_v0_3 = func_002C1FD0(var_s5, arg1, arg2, 0x1A);
            var_s1 = temp_v0_3;
            if (temp_v0_3 != 0) {
loop_10:
                temp_v0_4 = func_002C1DD0(var_s5, arg1, arg2, 0x1A, var_s1);
                if (temp_v0_4 != -1) {
                    temp_v0_5 = func_00C13640(temp_v0_4, ((void *)D_00CB3450), temp_s6);
                    if (temp_v0_5 != (void *)-1) {
                        if ((temp_s0 & 0xFF) != (((s32) (func_00C132B0(temp_v0_5) & 0xFF) >> 5) & 1)) {
                            temp_a2 = M2C_FIELD(func_00C13280(temp_v0_4), u16 *, 2);
                            temp_a1 = (s32) temp_a2 % 312;
                            spC4 = 0;
                            spC0 = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f);
                            temp_a1_2 = temp_a2 >> 0x1F;
                            spC8 = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f);
                            if (arg3(&spC0, temp_a1_2, temp_a2) != 0) {
                                spB0 = 1;
                            } else {
                                goto block_15;
                            }
                        } else {
block_15:
                            var_s1 -= 1;
                            if (var_s1 == 0) {

                            } else {
                                goto loop_10;
                            }
                        }
                    }
                }
            }
        }
    }
    return spB0;
}
