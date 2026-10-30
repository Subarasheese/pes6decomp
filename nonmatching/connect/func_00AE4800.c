/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AE48B0();                                /* extern */
extern s32 D_003EAF38;
extern s32 D_003EAF3C;

s32 func_00AE4800(s32 *arg0, s32 *arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = *arg0;
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        D_003EAF3C = 0;
        var_s0 += 1;
        D_003EAF38 = 0;
        break;
    case 1:
        if (func_00AE48B0() == 1) {
            var_s0 += 1;
        case 2:
            if (arg1 != NULL) {
                *arg1 = D_003EAF38;
            }
            var_s0 += 1;
        default:
            var_s1 = 1;
        }
        break;
    }
    *arg0 = var_s0;
    return var_s1;
}
