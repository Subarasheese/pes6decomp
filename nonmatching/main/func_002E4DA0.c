/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002E4DA0(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 2)) {
        if (var_a1 >= 2) {
            var_a1 = 1;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        M2C_FIELD(arg0, s32 *, 4) = var_a1;
    }
}
