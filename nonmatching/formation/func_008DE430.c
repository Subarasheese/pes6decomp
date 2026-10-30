/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008CB0C0(s32);                             /* extern */
M2C_UNK func_008CC8F0(void *, s32, M2C_UNK);        /* extern */

void func_008DE430(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s0_2;

    if (arg1 >= 2) {
        var_s0 = 0;
        do {
            if (M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + func_008CB0C0(arg0 + 0xB0C)), u8 *, 0x9FD) & (1 << var_s0)) {
                func_008CC8F0(arg0 + 0xB0C, var_s0 & 0xFF, 1);
            } else {
                func_008CC8F0(arg0 + 0xB0C, var_s0 & 0xFF, 0);
            }
            var_s0 += 1;
        } while (var_s0 < 8);
        return;
    }
    var_s0_2 = 0;
    do {
        func_008CC8F0(arg0 + 0xB0C, var_s0_2 & 0xFF, 1);
        var_s0_2 += 1;
    } while (var_s0_2 < 8);
}
