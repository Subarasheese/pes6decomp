/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008429A0(M2C_UNK);                     /* extern */
s32 func_0094C7A0(M2C_UNK);                         /* extern */

s32 func_009655B0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0094C7A0(0);
    switch (temp_v0) {                              /* irregular */
    case 3:
        var_s0 = -3;
        break;
    case 2:
        var_s0 = -2;
        break;
    case 1:
        var_s0 = -1;
        break;
    case 4:
        func_008429A0(0);
        var_s0 = 1;
        break;
    default:
        var_s0 = -4;
        break;
    }
    return var_s0;
}
