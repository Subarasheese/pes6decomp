/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */

s32 func_00BC4270(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;

    var_s1 = arg1 - 1;
    var_s2 = *arg0;
    if (arg1 < 3) {
        if (func_00BCF3A0(4) == 0) {
            if (func_00BCF3A0(0x20) != 0) {
                var_v0 = var_s2 + 1;
                if (var_s1 < var_v0) {

                } else {
                    if (var_v0 < 0) {
                        var_v0 = 0;
                    }
                    var_s1 = var_v0;
                }
                var_s2 = var_s1;
            }
        } else {
            var_v0_2 = var_s2 - 1;
            if (var_s1 < var_v0_2) {

            } else {
                if (var_v0_2 < 0) {
                    var_v0_2 = 0;
                }
                var_s1 = var_v0_2;
            }
            var_s2 = var_s1;
        }
    } else if (func_00BCF3A0(1) == 0) {
        if (func_00BCF3A0(8) != 0) {
            temp_v0 = var_s2 + 1;
            if (var_s1 < temp_v0) {
                var_s1 = 0;
            } else if (temp_v0 >= 0) {
                var_s1 = temp_v0;
            }
            goto block_34;
        }
    } else {
        temp_v0_2 = var_s2 - 1;
        if (var_s1 < temp_v0_2) {
            var_s1 = 0;
        } else if (temp_v0_2 >= 0) {
            var_s1 = temp_v0_2;
        }
block_34:
        var_s2 = var_s1;
    }
    if (var_s2 == *arg0) {
        return 0;
    }
    *arg0 = var_s2;
    func_0026E840(0x8400F802);
    return 1;
}
