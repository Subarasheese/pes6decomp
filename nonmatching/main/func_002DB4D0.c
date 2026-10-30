/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DBC20(s32, M2C_UNK);                /* extern */

s16 func_002DB4D0(void *arg0, s16 arg1, s32 arg2) {
    if (arg0 != NULL) {
        if (!(arg2 & 0x40)) {
            if (arg2 & 0x10) {
                func_002DBC20(arg1 - 1, 4);
            }
        } else {
            func_002DBC20(arg1 + 1, 4);
        }
        if (arg0 != NULL) {
            return M2C_FIELD(arg0, s16 *, 0x18);
        }
        return 0;
    }
    return arg1;
}
