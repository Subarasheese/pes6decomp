/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */

s32 func_00C04D00(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 == 1) {
        var_s3 = 8;
        var_s0 = 0xF8;
    } else {
        var_s0 = 0xFF;
        if (func_00BCF3A0(0x04000000) == 0) {
            var_s3 = 1;
        } else {
            var_s3 = 0xA;
        }
        func_00BC3FB0(0x20100);
    }
    var_s2 = arg0;
    if (func_00BCF3A0(0x40) == 0) {
        if (func_00BCF3A0(0x200) == 0) {
            if (func_00BCF3A0(0x80) == 0) {
                if (func_00BCF3A0(0x400) != 0) {
                    var_v0 = arg0 + var_s3;
                    if (var_s0 < var_v0) {

                    } else {
                        if (var_v0 < 0) {
                            var_v0 = 0;
                        }
                        var_s0 = var_v0;
                    }
                    goto block_42;
                }
            } else {
                var_v0_2 = arg0 - var_s3;
                if (var_s0 < var_v0_2) {

                } else {
                    if (var_v0_2 < 0) {
                        var_v0_2 = 0;
                    }
                    var_s0 = var_v0_2;
                }
                var_s2 = var_s0;
            }
        } else {
            temp_v0 = arg0 + var_s3;
            if (var_s0 < temp_v0) {
                var_s0 = 0;
            } else if (temp_v0 >= 0) {
                var_s0 = temp_v0;
            }
            goto block_42;
        }
    } else {
        temp_v0_2 = arg0 - var_s3;
        if (var_s0 < temp_v0_2) {
            var_s0 = 0;
        } else if (temp_v0_2 >= 0) {
            var_s0 = temp_v0_2;
        }
block_42:
        var_s2 = var_s0;
    }
    if (var_s2 != arg0) {
        func_0026E840(0x8400F803);
    }
    return var_s2;
}
