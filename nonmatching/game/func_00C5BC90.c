/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C1DD0(s32, s32, s32, M2C_UNK, s32);     /* extern */
s32 func_002C1FD0(M2C_UNK);                         /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C135B0(s32, M2C_UNK *, s32);             /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

s32 func_00C5BC90(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *)) {
    f32 sp8C;
    f32 var_f0;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s5;
    s32 var_s6;
    u8 temp_v0_4;

    var_s6 = 0;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v0 = func_002C1FD0(0x24);
        var_s5 = temp_v0;
        if (temp_v0 != 0) {
            temp_s4 = (*(s32 *)D_00CB3468);
loop_4:
            temp_v0_2 = func_002C1DD0(arg0, arg1, arg2, 0x24, var_s5);
            if (temp_v0_2 != -1) {
                temp_v0_3 = func_00C135B0(temp_v0_2, ((void *)D_00CB3450), temp_s4);
                if (temp_v0_3 != -1) {
                    temp_v0_4 = M2C_FIELD(func_00C13280(temp_v0_3), u8 *, 7);
                    if ((s32) temp_v0_4 < 0) {
                        var_f0 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
                    } else {
                        var_f0 = (f32) temp_v0_4;
                    }
                    sp8C = var_f0;
                    if (arg3(&sp8C) != 0) {
                        var_s6 = 1;
                    } else {
                        var_s5 -= 1;
                        if (var_s5 != 0) {
                            goto loop_4;
                        }
                    }
                }
            }
        }
    }
    return var_s6;
}
