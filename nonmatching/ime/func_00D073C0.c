/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D073C0(void *arg0) {
    s8 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x3F);
    } else {
        var_v0 = 3;
    }
    if ((((s64) ((s64) var_v0 << 0x38) >> 0x38) == 2) && (arg0 != NULL)) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s8 *, 0x3F) = 0;
        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
    }
    return 1;
}
