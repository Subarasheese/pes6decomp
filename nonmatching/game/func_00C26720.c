/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB52A0[];

s32 func_00C26720(u8 *arg0) {
    M2C_UNK *var_a1;
    s32 var_a2;
    s32 var_v0;

    var_a2 = 0;
    var_a1 = ((void *)D_00CB52A0);
loop_1:
    if ((M2C_FIELD(var_a1, u8 *, 0x6CC) == *arg0) && (M2C_FIELD(var_a1, s32 *, 0x6BC) == 2)) {
        var_v0 = 1;
    } else {
        var_a2 += 1;
        var_a1 += 0x40;
        if (var_a2 >= 0x16) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    if (var_v0 == 0) {
        return 0;
    }
    return 1;
}
