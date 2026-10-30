/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0020E310(M2C_UNK, s32);                /* extern */

s32 func_00972580(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    if ((arg1 & 0xFFFF) == 8) {
        temp_v0 = arg0 & 0xFFFF;
        if (temp_v0 >= 7) {
            if (temp_v0 < 8) {
                if (arg2 == 0) {
                    var_s0 = 1;
                } else {
                    func_0020E310(9, arg2);
                    var_s0 = 1;
                }
            } else if (arg2 == 0) {
                var_s0 = 2;
            } else {
                func_0020E310(0xA, arg2);
                var_s0 = 2;
            }
        } else if (arg2 != 0) {
            func_0020E310(5, arg2);
        }
    } else {
        temp_v0_2 = arg0 & 0xFFFF;
        if (temp_v0_2 >= 0x4B) {
            if (temp_v0_2 >= 0x50) {
                if (temp_v0_2 >= 0x5A) {
                    if (temp_v0_2 < 0x5F) {
                        if (arg2 == 0) {
                            var_s0 = 2;
                        } else {
                            func_0020E310(9, arg2);
                            var_s0 = 2;
                        }
                    } else {
                        if (arg2 != 0) {
                            func_0020E310(0xA, arg2);
                        }
                        var_s0 = 3;
                    }
                } else if (arg2 == 0) {
                    var_s0 = 1;
                } else {
                    func_0020E310(8, arg2);
                    var_s0 = 1;
                }
            } else if (arg2 == 0) {
                var_s0 = 1;
            } else {
                func_0020E310(7, arg2);
                var_s0 = 1;
            }
        } else if (arg2 != 0) {
            func_0020E310(5, arg2);
        }
    }
    return var_s0;
}
