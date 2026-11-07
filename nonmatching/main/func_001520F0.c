/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0050D484[];

s32 func_001520F0(void) {
    s32 var_v0;

    var_v0 = 0;
    if (((*(s32 *)D_0050D484) == 0) || ((*(s32 *)D_0050D484) == 2)) {
        var_v0 = 1;
    }
    return var_v0;
}
