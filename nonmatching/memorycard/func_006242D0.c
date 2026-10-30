/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00530C54[];

s32 func_006242D0(s32 arg0) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v1;

    temp_a1 = arg0 & 0xFFFF;
    var_v0 = 0;
    var_v1 = 0;
    if (temp_a1 < 0x1388) {
        var_v1 = (*(s32 *)D_00530C54) + (temp_a1 * 0x7C);
    }
    if (var_v1 != 0) {
        var_v0 = var_v1;
    }
    return var_v0;
}
