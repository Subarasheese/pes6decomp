/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0(s32);                             /* extern */
s8 func_00965250(s32);                              /* extern */
s8 func_00965260(s32);                              /* extern */
s32 func_009652C0(s32, s32);                        /* extern */
s32 func_009652D0(s32);                             /* extern */
s32 func_009652E0(s32);                             /* extern */
s32 func_009652F0();                                /* extern */
s32 func_009D7E50(s32);                             /* extern */
extern void *D_00A7DD68;

void *func_009C6D90(s32 arg0, void *arg1) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v1;
    void *temp_v1;

    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(D_00A7DD68, u8 *, 2))) {
        return NULL;
    }
    M2C_FIELD(arg1, s32 *, 0) = func_009652F0();
    M2C_FIELD(arg1, s32 *, 4) = func_009652E0(arg0);
    M2C_FIELD(arg1, s8 *, 0xF) = func_00965250(arg0);
    M2C_FIELD(arg1, s8 *, 0x10) = func_00965260(arg0);
    var_v1 = 0;
    do {
        M2C_FIELD((arg1 + var_v1), s8 *, 8) = 0;
        var_v1 += 1;
    } while (var_v1 < 7);
    temp_s0 = func_009652D0(arg0);
    var_s1 = 0;
loop_7:
    if (var_s1 < temp_s0) {
        temp_v1 = arg1 + func_009D7E50(func_008204A0(func_009652C0(arg0, var_s1)));
        var_s1 += 1;
        M2C_FIELD(temp_v1, u8 *, 8) = (u8) (M2C_FIELD(temp_v1, u8 *, 8) + 1);
        goto loop_7;
    }
    return arg1;
}
