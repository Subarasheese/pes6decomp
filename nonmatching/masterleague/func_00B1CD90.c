/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B1CC10(s32);                         /* extern */

void func_00B1CD90(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_00B1CC10(var_s0 & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 0x48);
}
