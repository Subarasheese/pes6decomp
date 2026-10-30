/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
M2C_UNK func_0096FCF0(s32);                         /* extern */

void func_0096FF90(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        if (var_s0 != (func_00225820() & 0xFF)) {
            func_0096FCF0(var_s0 & 0xFF);
        }
        var_s0 += 1;
    } while (var_s0 < 0x50);
}
