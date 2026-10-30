/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227EB0(void);
M2C_UNK func_0094B170(s32);                         /* extern */

void func_0094B120(void) {
    s32 var_s0;

    if (func_00227EB0() != 0) {
        var_s0 = 0;
        do {
            func_0094B170(var_s0 & 0xFFFF);
            var_s0 += 1;
        } while (var_s0 < 0x400);
    }
}
