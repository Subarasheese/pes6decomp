/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096FCF0(s32);                         /* extern */

void func_0096FFE0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_0096FCF0(var_s0 & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 0x50);
}
