/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s16 func_00958830(void) {
    s32 temp_v0;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x78;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s16 *, 0x40);
    }
    return 0;
}
