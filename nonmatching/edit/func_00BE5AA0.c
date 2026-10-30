/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC6100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BF77A0(s32, M2C_UNK);                /* extern */

void func_00BE5AA0(void) {
    s32 var_s0;

    var_s0 = 0x40;
    do {
        if (func_00BC6100(var_s0, 0) >= 0x20) {
            func_00BF77A0(var_s0, 1);
        }
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0xCC);
}
