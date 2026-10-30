/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_0095D8E0(void) {
    s32 temp_v0;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F1A4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s32 *, 0x10);
    }
    return 0;
}
