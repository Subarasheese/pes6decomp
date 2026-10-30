/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C1DD0(s32, s32, s32, M2C_UNK, s32);     /* extern */
s32 func_002C1FD0(M2C_UNK);                         /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C135B0(s32, M2C_UNK *, s32);             /* extern */
f32 func_00C18AC0(u16, u16);                        /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

s32 func_00C5BDC0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *)) {
    f32 sp9C;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s7;
    void *temp_s5;

    var_s7 = 0;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v0 = func_002C1FD0(0x24);
        var_s0 = temp_v0;
        if (temp_v0 != 0) {
            temp_s6 = (*(s32 *)D_00CB3468);
loop_4:
            temp_v0_2 = func_002C1DD0(arg0, arg1, arg2, 0x24, var_s0);
            if (temp_v0_2 != -1) {
                temp_v0_3 = func_00C135B0(temp_v0_2, ((void *)D_00CB3450), temp_s6);
                if (temp_v0_3 != -1) {
                    temp_s5 = func_00C13280(temp_v0_3);
                    sp9C = func_00C18AC0(M2C_FIELD(temp_s5, u16 *, 2), M2C_FIELD(func_00C13280(temp_v0_2), u16 *, 2));
                    if (arg3(&sp9C) != 0) {
                        var_s7 = 1;
                    } else {
                        var_s0 -= 1;
                        if (var_s0 != 0) {
                            goto loop_4;
                        }
                    }
                }
            }
        }
    }
    return var_s7;
}
