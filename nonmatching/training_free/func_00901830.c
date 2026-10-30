/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0026BB70(void);
extern char D_00591DD0[];

s32 func_00901830(void) {
    s32 var_v0;

    var_v0 = func_0026BB70() > 0;
    if (var_v0 != 0) {
        var_v0 = (*(u8 *)D_00591DD0) == 0;
    }
    return var_v0;
}
