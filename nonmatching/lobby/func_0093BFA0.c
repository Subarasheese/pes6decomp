/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_009449A0();                                /* extern */

s32 func_0093BFA0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_009449A0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        if (func_0082C7C0(0x71) == -0x2D0) {
            var_s0 = 1;
        } else {
        default:
            var_s0 = -1;
        }
        break;
    case 4:
        var_s0 = 1;
        break;
    }
    return var_s0;
}
