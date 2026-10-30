/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00130A78(void);
s32 func_00154300();                                /* extern */

s32 func_0012FE68(void) {
    s32 var_v0;

    var_v0 = 2;
    if (func_00154300() != 0) {
        var_v0 = func_00130A78();
    }
    return var_v0;
}
