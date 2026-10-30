/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B00C28[];

s32 func_00AE2C30(s32 *arg0) {
    s32 var_a1;
    s32 var_v0;

    var_a1 = *arg0;
    var_v0 = 0;
    switch (var_a1) {                               /* irregular */
    case 0:
        var_a1 += 1;
        (*(s32 *)D_00B00C28) = 0;
        break;
    case 1:
        if ((*(s32 *)D_00B00C28) >= 4) {
            var_a1 += 1;
        case 2:
            var_v0 = 1;
        }
        break;
    }
    *arg0 = var_a1;
    return var_v0;
}
