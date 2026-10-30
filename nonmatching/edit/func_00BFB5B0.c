/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCF3A0(M2C_UNK);                         /* extern */

s32 func_00BFB5B0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(0x08000000) == 0) {
                if (func_00BCF3A0(1) == 0) {
                    if (func_00BCF3A0(8) == 0) {
                        if (func_00BCF3A0(0x80) == 0) {
                            if (func_00BCF3A0(0x400) == 0) {
                                if (func_00BCF3A0(0x20000) == 0) {
                                    if (func_00BCF3A0(0x100000) != 0) {
                                        var_s0 = 9;
                                    }
                                } else {
                                    var_s0 = 8;
                                }
                            } else {
                                var_s0 = 7;
                            }
                        } else {
                            var_s0 = 6;
                        }
                    } else {
                        var_s0 = 5;
                    }
                } else {
                    var_s0 = 4;
                }
            } else {
                var_s0 = 3;
            }
        } else {
            var_s0 = 2;
        }
    } else {
        var_s0 = 1;
    }
    if (func_00BCF3A0(0x200000) == 0) {
        if (func_00BCF3A0(0x400000) != 0) {
            var_s0 = 0xB;
        }
    } else {
        var_s0 = 0xA;
    }
    return var_s0;
}
