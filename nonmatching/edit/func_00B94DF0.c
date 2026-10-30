/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE35B0[];

s32 func_00B94DF0(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 < 0x24) {
        var_v0 = (*(s32 *)D_00CE35B0) + (arg0 * 0x3D) + 0x113C;
    }
    return var_v0;
}
