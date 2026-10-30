/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C83D8(s32, M2C_UNK *, s32);             /* extern */
extern char D_0050E584[];

s32 func_0016AB48(s32 arg0, s32 arg1) {
    M2C_UNK *var_a1;
    M2C_UNK *var_s1;
    s32 var_s0;

    var_s0 = 0;
    var_s1 = ((void *)D_0050E584);
    var_a1 = ((void *)D_0050E584);
loop_1:
    var_s1 += 0x10;
    var_s0 += 1;
    if (func_001C83D8(arg0, var_a1, arg1) == 0) {
        return 1;
    }
    var_a1 = var_s1;
    if (var_s0 >= 0x20) {
        return 0;
    }
    goto loop_1;
}
