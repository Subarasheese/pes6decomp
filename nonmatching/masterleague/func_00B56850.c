/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994760();                                /* extern */

u8 func_00B56850(void) {
    s32 temp_v0;
    void *var_v0;

    temp_v0 = func_00994760();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x61AC4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 0x20);
    }
    return 0U;
}
