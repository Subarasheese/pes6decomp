/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591F24[];
extern char D_00CCAF71[];

s32 func_00C18EE0(void) {
    s32 var_v0;

    var_v0 = (*(u8 *)D_00CCAF71) == 0;
    if (var_v0 != 0) {
        var_v0 = (*(u8 *)D_00591F24) != 8;
    }
    return var_v0;
}
