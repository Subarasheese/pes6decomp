/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00213F20(s32, s32 *, s32, s32);        /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
extern s32 D_003E9A00;

s32 func_00212FC0(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 sp80;
    s32 spB0;
    s32 spE0;
    s32 *var_s2;
    s32 *var_s4_2;
    s32 *var_s4_3;
    s32 *var_s5;
    s32 temp_s6;
    s32 temp_v0;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_s5_2;
    s32 var_s5_3;
    s32 var_s6;

    var_s3 = arg0;
    var_s2 = arg1;
    if (var_s3 != 0) {
        if (arg3 >= 0xC) {
            var_s4 = 0xB;
        } else if (arg3 >= 0) {
            var_s4 = arg3;
        } else {
            var_s4 = 0;
        }
        var_s6 = 0;
        if (var_s4 > 0) {
            var_s5 = &spE0;
            do {
                *var_s5 = func_001F08B0(*var_s2);
                var_s6 += 1;
                var_s2 += 4;
                var_s5 += 4;
            } while (var_s6 < var_s4);
        }
        func_00213F20(var_s3, &spE0, arg2, arg3);
    } else {
        temp_s6 = D_003E9A00;
        if (temp_s6 == 0) {
            temp_v0 = func_00214540(0);
            D_003E9A00 = temp_v0;
            if (arg3 >= 0xC) {
                var_s3_2 = 0xB;
            } else if (arg3 >= 0) {
                var_s3_2 = arg3;
            } else {
                var_s3_2 = 0;
            }
            var_s5_2 = 0;
            if (var_s3_2 > 0) {
                var_s4_2 = &sp80;
                do {
                    *var_s4_2 = func_001F08B0(*var_s2);
                    var_s5_2 += 1;
                    var_s2 += 4;
                    var_s4_2 += 4;
                } while (var_s5_2 < var_s3_2);
            }
            func_00213F20(temp_v0, &sp80, arg2, arg3);
        } else {
            if (arg3 >= 0xC) {
                var_s3_3 = 0xB;
            } else if (arg3 >= 0) {
                var_s3_3 = arg3;
            } else {
                var_s3_3 = 0;
            }
            var_s5_3 = 0;
            if (var_s3_3 > 0) {
                var_s4_3 = &spB0;
                do {
                    *var_s4_3 = func_001F08B0(*var_s2);
                    var_s5_3 += 1;
                    var_s2 += 4;
                    var_s4_3 += 4;
                } while (var_s5_3 < var_s3_3);
            }
            func_00213F20(temp_s6, &spB0, arg2, arg3);
        }
        var_s3 = D_003E9A00;
    }
    return var_s3;
}
