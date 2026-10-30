/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0(s32);                             /* extern */
s32 func_009650A0();                                /* extern */
s32 func_009650B0(s32, s32);                        /* extern */
s32 func_009650E0(s32);                             /* extern */
s32 func_00965110(s32, s32, s32);                   /* extern */
s32 func_00965140(s32, s32, s32);                   /* extern */
s32 func_00965150(s32, s32, s32);                   /* extern */
s8 func_00965160(s32, s32);                         /* extern */
s16 func_00965170(s32, s32);                        /* extern */
s8 func_00965180(s32, s32, s32);                    /* extern */
s32 func_009651A0(s32);                             /* extern */
s8 func_009D3300(s32, s32);                         /* extern */
s8 func_009D33E0(s32, s32);                         /* extern */
s32 func_009D3510(s32);                             /* extern */
extern void *D_00A7DEA8;

void *func_009D8A20(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s5;

    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(D_00A7DEA8, u8 *, 2))) {
        return NULL;
    }
    M2C_FIELD(arg1, s32 *, 0) = func_009650A0();
    M2C_FIELD(arg1, s32 *, 4) = func_009650E0(arg0);
    temp_v0 = func_009651A0(arg0);
    M2C_FIELD(arg1, s32 *, 0x90) = func_009D3510(temp_v0);
    var_s4 = 0;
    do {
        temp_s2 = arg1 + var_s4;
        M2C_FIELD(temp_s2, s8 *, 0x82) = func_009D33E0(temp_v0, var_s4);
        M2C_FIELD(temp_s2, s8 *, 0x87) = func_009D3300(temp_v0, var_s4);
        var_s4 += 1;
    } while (var_s4 < 5);
    var_s4_2 = 0;
    do {
        M2C_FIELD((arg1 + var_s4_2), s8 *, 8) = func_00965160(arg0, var_s4_2);
        M2C_FIELD((arg1 + (var_s4_2 * 2)), s16 *, 0xA) = func_00965170(arg0, var_s4_2);
        var_s3 = 0;
        M2C_FIELD((arg1 + (var_s4_2 * 4)), s32 *, 0x10) = func_009650B0(arg0, var_s4_2);
loop_7:
        temp_s5 = arg1 + (var_s4_2 * 0x30) + (var_s3 * 0xC);
        M2C_FIELD(temp_s5, s32 *, 0x18) = func_00965150(arg0, var_s4_2, var_s3);
        M2C_FIELD(temp_s5, s32 *, 0x1C) = func_008204A0(func_00965140(arg0, var_s4_2, var_s3));
        M2C_FIELD(temp_s5, s32 *, 0x20) = func_00965110(arg0, var_s4_2, var_s3);
        var_s3 += 1;
        if (var_s3 < 4) {
            goto loop_7;
        }
        var_s3_2 = 0;
        temp_s2_2 = arg1 + (var_s4_2 * 5);
loop_9:
        if (M2C_FIELD((arg1 + var_s3_2), u8 *, 0x82) == 0) {
            M2C_FIELD((temp_s2_2 + var_s3_2), s8 *, 0x78) = 0;
        } else {
            M2C_FIELD((temp_s2_2 + var_s3_2), s8 *, 0x78) = func_00965180(arg0, var_s4_2, var_s3_2);
        }
        var_s3_2 += 1;
        if (var_s3_2 < 5) {
            goto loop_9;
        }
        var_s4_2 += 1;
    } while (var_s4_2 < 2);
    return arg1;
}
