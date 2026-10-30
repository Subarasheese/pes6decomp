/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB690[];

s32 func_00C379B0(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CCB690);
loop_1:
    if (M2C_FIELD(var_a0, u8 *, 0x6C) == 0) {
        return var_a1 + 1;
    }
    var_a1 += 1;
    var_a0 += 0x94;
    if (var_a1 >= 4) {
        return 0;
    }
    goto loop_1;
}
