/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];

s32 func_00998250(u8 *arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a0 = ((void *)D_00592800);
loop_1:
    if (*arg0 != M2C_FIELD(var_a0, u8 *, 0x10)) {
        var_a2 += 1;
        var_a0 += 0x28;
        if (var_a2 >= 8) {
            return 0;
        }
        goto loop_1;
    }
    return var_a2 != arg1;
}
