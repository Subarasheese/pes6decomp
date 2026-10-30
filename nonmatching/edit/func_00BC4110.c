/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCF3A0(M2C_UNK);                         /* extern */

s32 func_00BC4110(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = arg0;
    var_s2 = arg3;
    var_s1 = arg1;
    var_s0 = arg2;
    if (func_00BCF3A0(0x04000000) != 1) {
        var_s2 = 1;
    }
    if (func_00BCF3A0(0x40) == 0) {
        if (func_00BCF3A0(0x200) == 0) {
            if (var_s0 >= 2) {
                if (func_00BCF3A0(0x80) == 0) {
                    if (func_00BCF3A0(0x400) != 0) {
                        temp_v0 = var_s3 + var_s2;
                        if (var_s0 >= temp_v0) {
                            if (temp_v0 >= var_s1) {
                                var_s1 = temp_v0;
                            }
                            var_s0 = var_s1;
                        }
                        var_s3 = var_s0;
                    }
                } else {
                    temp_v0_2 = var_s3 - var_s2;
                    if (var_s0 >= temp_v0_2) {
                        if (temp_v0_2 >= var_s1) {
                            var_s1 = temp_v0_2;
                        }
                        var_s0 = var_s1;
                    }
                    var_s3 = var_s0;
                }
            }
        } else {
            temp_v0_3 = var_s3 + var_s2;
            if (var_s0 >= temp_v0_3) {
                if (temp_v0_3 >= var_s1) {
                    var_s0 = temp_v0_3;
                }
                var_s1 = var_s0;
            }
            var_s3 = var_s1;
        }
    } else {
        temp_v0_4 = var_s3 - var_s2;
        if (var_s0 >= temp_v0_4) {
            if (temp_v0_4 >= var_s1) {
                var_s0 = temp_v0_4;
            }
            var_s1 = var_s0;
        }
        var_s3 = var_s1;
    }
    return var_s3;
}
