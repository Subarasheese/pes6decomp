/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081B660(s32 arg0, s32 arg1, s8 arg2) {
    void *var_v1;

    if (arg0 == 0) {
        var_v1 = NULL;
    } else if (arg1 < 0) {
        var_v1 = NULL;
    } else if (arg1 < 4) {
        var_v1 = arg0 + (arg1 * 0x74) + 4;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        M2C_FIELD(var_v1, s8 *, 0x24) = arg2;
        M2C_FIELD(var_v1, s8 *, 0x25) = 1;
        return 1;
    }
    return 0;
}
