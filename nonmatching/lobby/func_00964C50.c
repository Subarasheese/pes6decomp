/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_00951B60();                                /* extern */

s32 func_00964C50(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_00951B60();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        if (func_0082C7C0(0x24) == -0x1F5) {
            var_s0 = -0xA;
        } else {
        default:
        case 2:
            var_s0 = -0x14;
        }
        break;
    case 4:
        var_s0 = 1;
        break;
    }
    return var_s0;
}
