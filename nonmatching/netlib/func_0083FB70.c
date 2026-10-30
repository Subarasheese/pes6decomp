/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083FB70(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) {
            if (M2C_FIELD(arg0, s8 *, 8) == M2C_FIELD(arg1, s8 *, 8)) {
                if (M2C_FIELD(arg0, u8 *, 9) == M2C_FIELD(arg1, u8 *, 9)) {
                    return M2C_FIELD(arg0, u8 *, 0xA) != M2C_FIELD(arg1, u8 *, 0xA);
                }
                return 1;
            }
            return 1;
        }
        return 1;
    }
    return 0;
}
