/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00266BA0(s32, s32, s32, M2C_UNK);      /* extern */

void func_00BCC660(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_00266BA0(arg0, arg1 != 0, var_s0, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
}
