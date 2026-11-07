/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001DB2D0(M2C_UNK, u32, M2C_UNK);           /* extern */

s32 func_002650A0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK var_a0;
    u32 var_a1;

    if (arg1 == 1) {
        return 0;
    }
    var_a1 = arg0 - 0x73;
    if (var_a1 >= 0xB1U) {
        var_a1 = 0;
    }
    var_a0 = 1;
    if (arg2 == 1) {
        var_a0 = 2;
    }
    return func_001DB2D0(var_a0, var_a1, 1);
}
