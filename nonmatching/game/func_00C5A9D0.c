/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_002C1DD0(s32, s32, s32, s32, s32);     /* extern */
s32 func_002C1FD0(s32, s32, s32, s32);          /* extern */
s32 func_002C4B50(s32, s32);                    /* extern */
s32 func_002C6130(s32);                         /* extern */
void *func_00C13280(s32);                       /* extern */

s32 func_00C5A9D0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    f32 v[4];
    f32 temp_f20;
    s32 temp_v0;
    s32 var_fp;
    s32 var_s1;
    u16 temp_a2;
    s32 temp_a1;
    u32 temp_a1_2;

    var_fp = 0;
    if ((arg0 != -1) && (arg1 != -1)) {
        var_s1 = func_002C1FD0(arg0, arg1, arg2, 4);
        temp_f20 = (f32) func_002C4B50(arg1, ((s32) (arg2 & 0xFF) >> 5) & 1);
        if (var_s1 != 0) {
loop_4:
            temp_v0 = func_002C1DD0(arg0, arg1, arg2, 4, var_s1);
            if (temp_v0 != -1) {
                if (!(M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 4)) {
                    if ((func_002C6130(temp_v0) == -1) && (temp_a2 = M2C_FIELD(func_00C13280(temp_v0), u16 *, 2), temp_a1 = (s32) temp_a2 % 312, *(s32 *)&v[1] = 0, v[0] = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f), temp_a1_2 = temp_a2 >> 0x1F, v[2] = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f), (arg3(v, temp_a1_2, temp_a2) != 0))) {
                        var_fp = 1;
                    } else {
                        goto block_8;
                    }
                } else {
block_8:
                    var_s1 -= 1;
                    if (var_s1 == 0) {

                    } else {
                        goto loop_4;
                    }
                }
            }
        }
    }
    return var_fp;
}
