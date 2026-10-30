/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C4960(u32, s8);
extern u8 func_00C132B0(void *);
s32 func_002C1DD0(u32, s32, s8, M2C_UNK, s32);      /* extern */
s32 func_002C1FD0(u32, s32, s8, M2C_UNK);           /* extern */
u32 func_00C135B0(M2C_UNK *, s32);                  /* extern */
void *func_00C13640(s32, M2C_UNK *, s32);           /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

s32 func_00C5B3C0(u32 arg0, s32 arg1, s8 arg2) {
    s32 temp_a1;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s5;
    s32 var_s6;
    u32 temp_v0;
    u32 var_s2;
    void *temp_v0_4;

    var_s6 = 0;
    var_s2 = arg0;
    temp_a1 = arg2 & 0xFF;
    if ((var_s2 != -1U) && (arg1 != -1) && (temp_a1 != 0xFF)) {
        temp_s4 = (*(s32 *)D_00CB3468);
        temp_v0 = func_00C135B0(((void *)D_00CB3450), (*(s32 *)D_00CB3468));
        if (temp_v0 != -1U) {
            var_s2 = temp_v0;
        }
        if (func_002C4960(var_s2, arg2) == 0) {
            temp_v0_2 = func_002C1FD0(var_s2, arg1, arg2, 0x1A);
            var_s5 = temp_v0_2;
            if (temp_v0_2 != 0) {
loop_8:
                temp_v0_3 = func_002C1DD0(var_s2, arg1, arg2, 0x1A, var_s5);
                if (temp_v0_3 != -1) {
                    temp_v0_4 = func_00C13640(temp_v0_3, ((void *)D_00CB3450), temp_s4);
                    if (temp_v0_4 != (void *)-1) {
                        temp_v1 = func_00C132B0(temp_v0_4) & 0xFF;
                        if ((temp_v1 != 0xFF) && (((temp_a1 >> 5) & 1 & 0xFF) != ((temp_v1 >> 5) & 1))) {
                            var_s6 = 1;
                        } else {
                            var_s5 -= 1;
                            if (var_s5 == 0) {

                            } else {
                                goto loop_8;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_s6;
}
