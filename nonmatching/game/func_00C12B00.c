/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB3450[];

s32 func_00C12B00(s32 arg0) {
    s32 var_a1;
    u8 *var_a0;

    var_a1 = 0;
    var_a0 = ((void *)D_00CB3450);
loop_1:
    if (*var_a0 != (arg0 & 0xFF)) {
        var_a1 += 1;
        var_a0 += 1;
        if (var_a1 >= 0x12) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
