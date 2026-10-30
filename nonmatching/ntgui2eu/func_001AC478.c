/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001AC478(s32 *arg0) {
    s32 *var_a0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;

    var_a0 = arg0;
    var_a1 = *var_a0;
    var_a2 = 0;
    if (var_a1 != 0) {
        do {
            if (M2C_FIELD(var_a0, s32 *, 4) != 0) {
                var_a2 = (M2C_FIELD(var_a0, s32 *, 8) != 0) ? (var_a2 + 1) : var_a2;
            }
            var_a0 = var_a0 + var_a1 + 4;
            temp_v1 = *var_a0;
            var_a1 = temp_v1;
        } while (temp_v1 != 0);
    }
    return var_a2;
}
