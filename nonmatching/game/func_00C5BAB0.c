/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C19F0(s32, s32, s32, M2C_UNK, s32);     /* extern */
s32 func_002C1BF0(M2C_UNK);                         /* extern */
u32 func_00C13640(s32, M2C_UNK *, s32);             /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];
extern char D_00CB4A30[];

u32 func_00C5BAB0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    u32 temp_v0_3;
    u32 var_s2;

    var_s2 = -1U;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v0 = func_002C1BF0(6);
        var_s1 = temp_v0;
        if (temp_v0 != 0) {
            temp_s6 = (*(s32 *)D_00CB3468);
loop_4:
            temp_v0_2 = func_002C19F0(arg0, arg1, arg2, 6, var_s1);
            if (temp_v0_2 != -1) {
                var_s2 = func_00C13640(temp_v0_2, ((void *)D_00CB4A30), 9);
                temp_v0_3 = func_00C13640(temp_v0_2, ((void *)D_00CB3450), temp_s6);
                if ((var_s2 != -1U) && (temp_v0_3 != -1U)) {
                    if (temp_v0_3 < var_s2) {
                        goto block_9;
                    }
                } else {
block_9:
                    var_s1 -= 1;
                    var_s2 = -1U;
                    if (var_s1 == 0) {

                    } else {
                        goto loop_4;
                    }
                }
            }
        }
    }
    return var_s2;
}
