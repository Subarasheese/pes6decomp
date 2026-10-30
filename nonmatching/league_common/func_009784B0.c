/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009784B0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a5;
    s32 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = var_a0 & 0xFF;
    var_a5 = 0;
    if (temp_a2 >= 0x20) {
        return 0;
    }
    temp_v1 = var_a1 & 0xFF;
    if (temp_v1 >= 0x20) {
        return 0;
    }
    if (temp_a2 != temp_v1) {
        if (temp_v1 < temp_a2) {
            var_a0 = temp_v1;
            var_a1 = temp_a2 & 0xFF;
        }
        temp_a0 = var_a0 & 0xFF;
        var_a2 = 0;
        if (temp_a0 > 0) {
            if (temp_a0 >= 9) {
                var_v0 = 0;
                if ((temp_a0 >= 0) && (temp_a0 < 0x7FFFFFFF)) {
                    var_v0 = 1;
                }
                if (var_v0 != 0) {
                    do {
                        temp_a4 = var_a5 + (0x1F - var_a2) + (0x1F - (var_a2 + 1)) + (0x1F - (var_a2 + 2)) + (0x1F - (var_a2 + 3)) + (0x1F - (var_a2 + 4)) + (0x1F - (var_a2 + 5)) + (0x1F - (var_a2 + 6));
                        temp_a3 = 0x1F - (var_a2 + 7);
                        var_a2 += 8;
                        var_a5 = temp_a4 + temp_a3;
                    } while (var_a2 < (temp_a0 - 8));
                }
            }
            if (var_a2 < temp_a0) {
                do {
                    var_a5 += 0x1F - var_a2;
                    var_a2 += 1;
                } while (var_a2 < temp_a0);
            }
        }
        return var_a5 + (((var_a1 & 0xFF) - temp_a0) - 1);
    }
    return 0;
}
