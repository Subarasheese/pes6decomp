/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA184;

s32 func_0063E160(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 >= 0) && (arg0 < 0x24) && (arg1 >= 0) && ((u32) arg1 < 0x1400U)) {
        var_v0 = D_003EA184 + (arg1 + (arg0 * 0x1400));
    }
    return var_v0;
}
