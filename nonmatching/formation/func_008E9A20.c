/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008E9A20(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 != NULL) {
        if (M2C_FIELD(arg1, u8 *, 0x7CD) == M2C_FIELD(arg0, u8 *, 2)) {
            return M2C_FIELD(arg1, u8 *, 0x7CE) != M2C_FIELD(arg0, u8 *, 3);
        }
        return 1;
    }
    return 0;
}
