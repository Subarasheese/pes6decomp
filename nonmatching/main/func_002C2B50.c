/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00C12B00(s32);                             /* extern */
s32 func_00C12C80(s32);                             /* extern */
void *func_00C13280(u32);                           /* extern */
s32 func_00C132B0(u32);                             /* extern */
s32 func_00C132C0(u32);                             /* extern */
u32 func_00C13640(u32, M2C_UNK *, s32);             /* extern */
u32 func_00C136E0(u32, M2C_UNK);                    /* extern */
u32 func_00C13740();                                /* extern */
u32 func_00C137F0();                                /* extern */
u32 func_00C13840();                                /* extern */
s32 func_00C18DC0(u8);                              /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];
extern char D_00CB3470[];
extern char D_00CB3480[];

s32 func_002C2B50(u32 arg0) {
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s4;
    u32 temp_a0;
    u32 temp_s1;
    u32 temp_v0;
    u32 var_s2;
    u32 var_s5;

    var_fp = 0;
    var_s5 = arg0;
    var_s4 = 0;
    temp_s1 = func_00C137F0();
    var_s2 = var_s5;
    temp_s0 = ((s32) (func_00C132B0(var_s5) & 0xFF) >> 5) & 1;
    if ((func_00C132C0(var_s5) & 0xFF) != 1) {
        var_s2 = func_00C136E0(var_s5, 1);
        if (var_s2 == -1U) {
            var_s2 = func_00C13840();
            if ((func_00C132C0(var_s2) & 0xFF) == 1) {

            } else {
                var_s2 = func_00C13740();
            }
        }
    }
    temp_s2 = temp_s0 & 0xFF;
    temp_f20 = (f32) (1 - (((s32) ((func_00C18DC0(M2C_FIELD(func_00C13280(var_s2), u8 *, 1)) & 0xFF) + temp_s2) % 2) * 2));
    if (func_00C12B00(func_00C132C0(var_s5)) != 0) {
        var_s0 = 1;
        if (!((temp_f20 * ((86.59164f * (f32) ((s32) M2C_FIELD(func_00C13280(var_s5), u16 *, 2) % 312)) - 13465.0f)) < 6732.5f)) {
            var_s0 = 0;
        }
        if (var_s5 < temp_s1) {
            temp_s6 = (*(s32 *)D_00CB3468);
            temp_s7 = (*(s32 *)D_00CB3480);
loop_13:
            temp_s3 = func_00C132C0(var_s5) & 0xFF;
            temp_v1 = func_00C132B0(var_s5) & 0xFF;
            if ((temp_v1 == 0xFF) || (temp_s2 == ((temp_v1 >> 5) & 1))) {
                if ((temp_s3 & 0xFF) == 0xA) {
                    var_fp = 1;
                } else {
                    temp_f21 = temp_f20 * ((86.59164f * (f32) ((s32) M2C_FIELD(func_00C13280(var_s5), u16 *, 2) % 312)) - 13465.0f);
                    if (func_00C12C80(temp_s3) != 0) {
                        temp_v1_2 = M2C_FIELD(func_00C13280(var_s5), u8 *, 5) & 3;
                        switch (temp_v1_2) {        /* irregular */
                        case 2:
                        case 1:
                            var_fp = 1;
                            break;
                        case 3:
                            if (!(temp_f21 <= 0.0f)) {
                                var_fp = 1;
                            } else {
                                goto block_21;
                            }
                            break;
                        }
                    } else {
block_21:
                        if ((var_s0 != 0) && (var_s4 == 0)) {
                            var_s4 = 1;
                            if (temp_f21 <= 6732.5f) {
                                var_s4 = 0;
                            }
                        }
                        if ((var_s4 != 0) && (func_00C12C80(temp_s3) != 0)) {
                            var_fp = 1;
                        } else {
                            temp_a0 = var_s5;
                            var_s5 = func_00C13640(var_s5, ((void *)D_00CB3450), temp_s6);
                            temp_v0 = func_00C13640(temp_a0, ((void *)D_00CB3470), temp_s7);
                            if ((temp_v0 != -1U) && (temp_v0 >= var_s5)) {
                                if (var_s5 >= temp_s1) {

                                } else {
                                    goto loop_13;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_fp;
}
