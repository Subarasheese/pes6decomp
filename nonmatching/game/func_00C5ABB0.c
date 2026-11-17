/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
void *func_002C19F0(s32, s32, s32, s32, s32);       /* extern */
s32 func_002C1BF0(s32, s32, s32, s32);              /* extern */
s32 func_002C4B50(s32, s32);                        /* extern */
void *func_00C13280(void *);                        /* extern */
void *func_00C13390(void *);                        /* extern */

s32 func_00C5ABB0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    s32 spB0;
    f32 sp[3];
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
        var_s0 = func_002C1BF0(arg0, arg1, temp_s4, 6);
        temp_f20 = (f32) func_002C4B50(arg1, temp_s4);
        if (var_s0 != 0) {
loop_4:
            temp_v0 = func_002C19F0(arg0, arg1, temp_s4, 6, var_s0);
            if (temp_v0 != (void *)-1) {
                if (!(M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 4)) {
                    temp_v0_2 = func_00C13390(temp_v0);
                    if ((temp_v0_2 != (void *)-1) && ((func_00C132C0(temp_v0_2) & 0xFF) == 0xB) && (temp_s3 == (func_00C132B0(temp_v0_2) & 0xFF)) && (temp_a2 = M2C_FIELD(func_00C13280(temp_v0_2), u16 *, 2), temp_a1 = (s32) temp_a2 % 312, ((s32 *)sp)[1] = 0, sp[0] = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f), temp_a1_2 = temp_a2 >> 0x1F, sp[2] = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f), (arg3(sp, temp_a1_2, temp_a2) != 0))) {
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
