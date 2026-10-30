/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994760();                                /* extern */

u8 func_00B567E0(s32 arg0) {
    s32 temp_v0;
    void *var_v0;

    if ((arg0 & 0xFF) >= 8) {
        var_v0 = NULL;
    } else {
        temp_v0 = func_00994760();
        if (temp_v0 != 0) {
            var_v0 = temp_v0 + ((arg0 & 0xFF) * 4) + 0x61AC4;
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 2);
    }
    return 0U;
}
