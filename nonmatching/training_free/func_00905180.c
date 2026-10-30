/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];
extern char D_005900B0[];

u8 func_00905180(s32 arg0, s32 arg1) {
    M2C_UNK *var_v1;
    s32 var_a0;

    if (arg0 == 0) {
        var_v1 = ((void *)D_0058E7F0);
    } else {
        var_v1 = ((void *)D_005900B0);
    }
    var_a0 = 0;
loop_4:
    if (M2C_FIELD(var_v1, u8 *, 0x1DD) != arg1) {
        var_a0 += 1;
        var_v1 += 0x240;
        if (var_a0 >= 0xB) {
            return 0U;
        }
        goto loop_4;
    }
    return M2C_FIELD(var_v1, u8 *, 0);
}
