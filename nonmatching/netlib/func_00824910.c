/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_008A4398;
extern char D_008A9BEC[];

s32 func_00824910(void) {
    s32 *var_v0;

    if (D_008A4398 != NULL) {
        if (M2C_FIELD(D_008A4398, s32 *, 0x49E8) == 0) {
            var_v0 = NULL;
        } else {
            var_v0 = ((void *)D_008A9BEC);
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return *var_v0;
    }
    return 0;
}
