/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0094C880(s32, s32);                    /* extern */

void func_0094CAE0(s32 arg0) {
    s32 var_s0;

    if ((arg0 & 0xFF) != 0xFF) {
        var_s0 = 0;
        do {
            func_0094C880(arg0, var_s0 & 0xFF);
            var_s0 += 1;
        } while (var_s0 < 0x20);
    }
}
