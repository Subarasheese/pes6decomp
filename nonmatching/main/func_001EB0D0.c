/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001EB0D0(s32 arg0, s64 arg1, s64 arg2, u8 *arg3) {
    s32 var_a4;
    s32 var_a6;
    s32 var_a7;
    s64 temp_a5;
    u8 *var_a3;
    u8 var_v1;

    var_a3 = arg3;
    if (arg0 != 4) {
        temp_a5 = (s64) (arg2 << 0x30) >> 0x30;
        if (arg0 == 1) {
            var_a4 = (s64) ((s64) (arg1 << 0x30) >> 0x30) >> 1;
        } else {
            var_a4 = (s32) ((s64) (arg1 << 0x30) >> 0x30);
        }
        var_a6 = 0;
        if (temp_a5 > 0) {
            do {
                var_a7 = 0;
                if (var_a4 > 0) {
                    do {
                        var_v1 = *var_a3;
                        if (arg0 == 1) {
                            var_v1 = (((var_v1 & 0xF) * 0x10) | (((s32) var_v1 >> 4) & 0xF)) & 0xFF;
                        }
                        *var_a3 = var_v1;
                        var_a7 += 1;
                        var_a3 += 1;
                    } while (var_a7 < var_a4);
                }
                var_a6 += 1;
            } while (var_a6 < temp_a5);
        }
    }
}
