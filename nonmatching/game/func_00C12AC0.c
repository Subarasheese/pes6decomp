/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB3450[];

s32 func_00C12AC0(void *arg0) {
    s32 var_a1;
    u8 *var_a0;

    var_a1 = 0;
    var_a0 = ((void *)D_00CB3450);
loop_1:
    if (*var_a0 != M2C_FIELD(arg0, u8 *, 2)) {
        var_a1 += 1;
        var_a0 += 1;
        if (var_a1 >= 0x12) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
