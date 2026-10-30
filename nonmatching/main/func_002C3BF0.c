/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00C13110(u32, u32, M2C_UNK *);             /* extern */
s32 func_00C132B0(u32);                             /* extern */
M2C_UNK func_00C132C0(u32);                         /* extern */
u32 func_00C13400(u32);                             /* extern */
u32 func_00C137C0(u32);                             /* extern */
u32 func_00C137F0();                                /* extern */
u32 func_00C13810();                                /* extern */
extern char D_00C12A40[];

u32 func_002C3BF0(u32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1;
    u32 temp_s2;
    u32 temp_s4;
    u32 temp_s7;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s3;
    u32 var_s5;
    u32 var_s6;

    var_s6 = -1U;
    temp_s4 = func_00C137F0();
    temp_s7 = func_00C13810();
    if ((arg0 != -1U) && (arg0 != temp_s7)) {
        var_s3 = arg0;
        temp_v0 = func_00C13400(arg0);
        if (temp_v0 != -1U) {
            temp_s1 = ((s32) (func_00C132B0(temp_v0) & 0xFF) >> 5) & 1;
            temp_s2 = func_00C13110(arg0, temp_s4, ((void *)D_00C12A40));
            var_s5 = temp_v0;
            if (temp_v0 >= temp_s4) {
                goto block_4;
            }
            temp_s1_2 = temp_s1 & 0xFF;
loop_8:
            func_00C132C0(var_s5);
            temp_v1 = func_00C132B0(var_s5) & 0xFF;
            if ((temp_v1 != 0xFF) && (temp_s0 = (temp_v1 >> 5) & 1, (temp_s1_2 != temp_s0))) {
                temp_v0_2 = func_00C13400(var_s5);
                if (temp_v0_2 != -1U) {
                    if (temp_v0_2 >= temp_s2) {
                        var_s6 = temp_s2;
                    } else if (temp_s1_2 != temp_s0) {
                        var_s6 = var_s3;
                    } else {
                        goto block_16;
                    }
                } else {
                    goto block_18;
                }
            } else {
block_16:
                var_s3 = var_s5;
                var_s5 = func_00C137C0(var_s5);
                if (var_s5 >= temp_s4) {
block_4:
                    if (var_s5 != temp_s4) {
                        if (temp_s4 == -1U) {
                            goto block_18;
                        }
                    } else {
block_18:
                        var_s6 = temp_s7;
                    }
                } else {
                    goto loop_8;
                }
            }
        }
    }
    return var_s6;
}
