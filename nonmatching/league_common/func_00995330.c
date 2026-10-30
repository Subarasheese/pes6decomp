/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00238630(s32, s32);
extern s32 func_00238330(s32);
M2C_UNK func_00229010(s32);                         /* extern */
s32 func_00234580(s32, s32);                        /* extern */
s32 func_00995400(M2C_UNK, s32);                    /* extern */

void func_00995330(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = func_00238630(func_00238330(arg1), arg1) & 0xFF;
    if ((func_00238330(arg1) & 0xFF) != 4) {
        temp_a0 = func_00995400(0, arg0) & 0xFF;
        if (temp_a0 != 0xFF) {
            var_v0 = func_00234580(temp_a0, temp_s0);
            goto block_13;
        }
        return;
    }
    temp_a0_2 = func_00995400(2, arg0) & 0xFF;
    if (temp_a0_2 != 0xFF) {
        var_v0 = func_00234580(temp_a0_2, temp_s0);
block_13:
        func_00229010(var_v0 & 0xFF);
    }
}
