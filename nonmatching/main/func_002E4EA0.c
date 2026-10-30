/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002E4EA0(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;

    var_a1 = arg1;
    if (arg0 != NULL) {
        var_a2 = M2C_FIELD(arg0, s16 *, 0x1C) - 1;
        if (var_a2 < var_a1) {

        } else {
            if (var_a1 < 0) {
                var_a1 = 0;
            }
            var_a2 = var_a1;
        }
        return M2C_FIELD(arg0, s32 *, 0x20) + (var_a2 * 0x50);
    }
    return 0;
}
