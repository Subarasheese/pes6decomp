/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D80(u8);                              /* extern */
s32 func_008B2AB0(u8);                              /* extern */
s8 func_008BEBD0(u8, s32, s32);                     /* extern */
extern char D_008EDDC0[];

void func_008DE8A0(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 temp_v1;
    s32 var_a3;
    s32 var_s2;
    u8 *var_s1;
    u8 temp_a0;
    u8 temp_a0_2;
    void *var_s0;

    var_a3 = arg3;
    if ((arg1 < 0xB) && (arg1 > 0)) {
        if (var_a3 < 0) {
            var_a3 = 0;
        }
        M2C_FIELD(arg2, s32 *, 0) = 0x78;
        var_s2 = 0;
        var_s0 = arg2;
        M2C_FIELD(arg2, u8 *, 0x2C) = (u8) M2C_FIELD(arg0, u8 *, 0);
        M2C_FIELD(arg2, s8 *, 0x2D) = 1;
        var_s1 = ((void *)D_008EDDC0) + (var_a3 * 7);
        M2C_FIELD(arg2, s8 *, 0x59) = 1;
loop_6:
        if (var_s2 < 7) {
            temp_a0 = *var_s1;
            if (temp_a0 == 0xFF) {

            } else {
                temp_a0_2 = *var_s1;
                M2C_FIELD(var_s0, s32 *, 4) = func_008B2AB0(temp_a0);
                M2C_FIELD(var_s0, s32 *, 0x30) = (s32) temp_a0_2;
                var_s1 += 1;
                M2C_FIELD((arg2 + var_s2), s8 *, 0x5A) = func_008BEBD0(temp_a0_2, arg1 & 0xFF, arg4);
                var_s0 += 4;
                var_s2 += 1;
                goto loop_6;
            }
        }
        temp_v1 = func_00292D80(M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), u8 *, 0x9F2)) & 0xFF;
        M2C_FIELD(arg2, s32 *, 0x64) = temp_v1;
        if (temp_v1 == 0) {
            M2C_FIELD(arg2, s32 *, 0x64) = 1;
        }
    }
}
