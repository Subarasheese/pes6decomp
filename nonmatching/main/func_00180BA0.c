/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_001CDA50(s32);
s32 func_00180BA0(s32 arg0) {
    s32 var_v0;
    u32 var_v0_2;

    var_v0 = 0xB;
    switch (arg0) {                                 /* irregular */
    case 3:
        var_v0_2 = func_001CDA50(1);
block_13:
        var_v0 = var_v0_2 + 1;
    case 4:
        return var_v0;
    case 2:
        var_v0_2 = func_001CDA50(0);
        goto block_13;
    case 1:
    case 0:
        return 0;
    default:
        return 0xB;
    }
}
