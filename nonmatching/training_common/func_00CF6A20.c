/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B2A340(M2C_UNK *);                       /* extern */
extern char D_005E3934[];

s32 func_00CF6A20(void) {
    s32 var_v0;

    var_v0 = func_00B2A340(((void *)D_005E3934)) == 4;
    if (var_v0 == 0) {
        var_v0 = func_00B2A340(((void *)D_005E3934)) == 5;
    }
    return var_v0;
}
