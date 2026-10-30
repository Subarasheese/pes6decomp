/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

u8 func_002B8B50(s32 arg0) {
    void *var_v0;

    if ((arg0 >= 0) && (arg0 < 2)) {
        var_v0 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 4);
    }
    return 0U;
}
