/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D1A180(M2C_UNK, s32, M2C_UNK);       /* extern */
extern char D_00D39AA8[];

s32 func_00D15360(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    (*(s32 *)D_00D39AA8) = arg0;
    do {
        if (!(arg0 & (1 << var_s0))) {
            func_00D1A180(0, var_s0, 2);
        } else {
            func_00D1A180(0, var_s0, 4);
        }
        var_s0 += 1;
    } while (var_s0 < 5);
    return 0;
}
