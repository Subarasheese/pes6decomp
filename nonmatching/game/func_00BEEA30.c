/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE48[];

s32 func_00BEEA30(u8 *arg0) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CBBE48);
loop_1:
    if (M2C_FIELD(var_a0, u8 *, 9) != *arg0) {
        var_a1 += 1;
        var_a0 += 1;
        if (var_a1 >= 3) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
