/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_0010DFE0();                               /* extern */

s32 *func_0010E040(M2C_UNK arg0, s32 *arg1) {
    s32 *temp_a0;
    s32 *var_v0;

    var_v0 = func_0010DFE0();
    temp_a0 = var_v0;
    if ((temp_a0 != NULL) && (M2C_FIELD(temp_a0, s32 *, 0) == 0x745865)) {
        var_v0 = temp_a0 + 0x10;
        if (arg1 != NULL) {
            *arg1 = M2C_FIELD(temp_a0, s32 *, 8);
            var_v0 = temp_a0 + 0x10;
        }
    }
    return var_v0;
}
