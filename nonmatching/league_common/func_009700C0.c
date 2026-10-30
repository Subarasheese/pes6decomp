/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00224D90(s32, s32);                        /* extern */
s32 func_00930C30(s32, s32);                        /* extern */
s32 func_00970200(s32, s32, M2C_UNK);               /* extern */

s32 func_009700C0(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;

    temp_s0 = func_00225820() & 0xFF;
    var_s2 = 0;
    var_s1 = 0;
    do {
        if (func_00970200(temp_s0, var_s2 & 0xFF, 0) == 1) {
            if ((func_00930C30(func_00224D90(temp_s0, var_s2 & 0xFF) & 0xFFFF, temp_s0) & 0xFF) > 0) {
                var_v1 = 0;
            } else {
                var_v1 = 1;
            }
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 1) {
            var_s1 = (var_s1 + 1) & 0xFF;
        }
        var_s2 += 1;
    } while (var_s2 < 0x20);
    return (var_s1 & 0xFF) >= 0x10;
}
