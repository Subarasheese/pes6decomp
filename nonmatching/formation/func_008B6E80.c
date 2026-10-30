/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_008B6E80(void *arg0) {
    u8 var_v0;

    var_v0 = M2C_FIELD(arg0, u8 *, 0xB);
    if ((s32) var_v0 > 0) {
        var_v0 = (var_v0 - 1) & 0xFF;
    }
    return M2C_FIELD(((var_v0 & 0xFF) + arg0), u8 *, 0xC);
}
