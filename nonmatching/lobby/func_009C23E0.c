/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD50;

s32 func_009C23E0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (D_00A7DD50 == NULL) {
        return 0;
    }
    if ((var_a0 <= 0) || (var_a0 >= 0x101)) {
        var_a0 = 0x100;
    }
    M2C_FIELD(D_00A7DD50, s32 *, 0x214) = var_a0;
    return 1;
}
