/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_0010DFE0(M2C_UNK);                        /* extern */

s32 *func_0010E098(void) {
    s32 *temp_a2;
    s32 *var_v0;
    s32 temp_v1;

    var_v0 = func_0010DFE0(0);
    temp_a2 = var_v0;
    if (temp_a2 != NULL) {
        var_v0 = NULL;
        if (M2C_FIELD(temp_a2, s32 *, 0) == 0x745865) {
            temp_v1 = M2C_FIELD(temp_a2, s32 *, 8);
            if (M2C_FIELD(temp_a2, s32 *, 4) != (temp_v1 + 0x10)) {
                var_v0 = temp_a2 + temp_v1 + 0x10;
            }
        }
    }
    return var_v0;
}
