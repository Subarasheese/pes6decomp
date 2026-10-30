/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB52A0[];

s32 func_00C050E0(u8 *arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a0 = ((void *)D_00CB52A0);
loop_1:
    if ((M2C_FIELD(var_a0, u8 *, 0x444) == *arg0) && (M2C_FIELD(var_a0, s32 *, 0x43C) == arg1)) {
        return 1;
    }
    var_a2 += 1;
    var_a0 += 0x40;
    if (var_a2 >= 0xA) {
        return 0;
    }
    goto loop_1;
}
