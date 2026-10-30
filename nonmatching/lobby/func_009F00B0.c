/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009F00B0(void *arg0, void *arg1) {
    s32 var_v0;
    s8 var_a2;
    s8 var_a3;

    var_v0 = 0;
    var_a3 = 0;
    var_a2 = 0;
    if ((u32) M2C_FIELD(arg1, u32 *, 0xC) >= 0x65U) {
        var_a3 = 1;
    }
    if (M2C_FIELD(arg1, s32 *, 8) >= 2) {
        var_a2 = 1;
    }
    if ((var_a3 != M2C_FIELD(arg0, s8 *, 0)) || (var_a2 != M2C_FIELD(arg0, s8 *, 1))) {
        M2C_FIELD(arg0, s8 *, 0) = var_a3;
        var_v0 = 1;
        M2C_FIELD(arg0, s8 *, 1) = var_a2;
    }
    return var_v0;
}
