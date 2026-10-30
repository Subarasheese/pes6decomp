/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003865D0[];

s32 func_0016EA68(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    var_a0 = ((void *)D_003865D0);
loop_1:
    if ((M2C_FIELD(var_a0, s8 *, 0) != 1) || (var_v0 = 1, (M2C_FIELD(var_a0, s8 *, 2) != 2))) {
        var_a1 += 1;
        var_a0 += 0x48;
        if (var_a1 >= 0x28) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
