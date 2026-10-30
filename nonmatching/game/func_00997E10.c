/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];

s32 func_00997E10(u8 *arg0) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00592800);
loop_1:
    if ((*arg0 == M2C_FIELD(var_a0, u8 *, 0x10)) && ((s32) M2C_FIELD(var_a0, u8 *, 0) < 8)) {
        return var_a1 & 0xFF;
    }
    var_a1 += 1;
    var_a0 += 0x28;
    if (var_a1 >= 8) {
        return 0xFF;
    }
    goto loop_1;
}
