/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081D2C0();                                /* extern */
s32 func_0084A750();                                /* extern */
extern char D_0058D7A9[];

s32 func_008FF110(void) {
    s32 var_v0;

    if (func_0084A750() != 0) {
        return 1;
    }
    var_v0 = func_0081D2C0() > 0;
    if (var_v0 != 0) {
        var_v0 = (*(s8 *)D_0058D7A9) == 0;
    }
    return var_v0;
}
