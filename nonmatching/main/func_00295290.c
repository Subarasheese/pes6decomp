/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005A24A0[];

s32 func_00295290(void) {
    s32 var_v1;

    if ((*(f32 *)D_005A24A0) <= 5.0f) {
        return 1;
    }
    if ((*(f32 *)D_005A24A0) < 20.0f) {
        var_v1 = 1;
        if (!((*(f32 *)D_005A24A0) <= 15.0f)) {
            var_v1 = 0;
        }
        return var_v1 & 0xFF;
    }
    return 0;
}
