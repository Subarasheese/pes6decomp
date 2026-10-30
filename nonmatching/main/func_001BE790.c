/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00398660[];

s32 func_001BE790(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((((void *)D_00398660) != NULL) && (M2C_FIELD(((void *)D_00398660), s32 *, 0x20) >= 2)) {
        var_v0 = 1;
    }
    return var_v0;
}
