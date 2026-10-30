/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B24D0[];
extern char D_008B24D2[];

s32 func_008810A0(void) {
    s32 var_v0;

    var_v0 = (*(u8 *)D_008B24D2) != 0;
    if (var_v0 != 0) {
        var_v0 = (*(u8 *)D_008B24D0) != 0;
    }
    return var_v0;
}
