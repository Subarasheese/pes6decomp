/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081B7B0(s32 arg0, s32 arg1, s8 arg2) {
    void *var_v0;

    if (arg0 == 0) {
        var_v0 = NULL;
    } else if (arg1 < 0) {
        var_v0 = NULL;
    } else if (arg1 < 4) {
        var_v0 = arg0 + (arg1 * 0x34) + 0x209;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        M2C_FIELD(var_v0, s8 *, 0x33) = arg2;
        return 1;
    }
    return 0;
}
