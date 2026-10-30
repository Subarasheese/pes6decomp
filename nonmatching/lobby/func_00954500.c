/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082AE20(M2C_UNK, s32);                  /* extern */

s16 func_00954500(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0082AE20(3, arg0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s16 *, 0x3C);
    }
    return 0;
}
