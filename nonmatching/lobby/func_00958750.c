/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

void *func_00958750(void) {
    s32 temp_v0;
    void *var_v1;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0x78;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0x52) != 0) {
            return var_v1 + 0x52;
        }
        return NULL;
    }
    return NULL;
}
