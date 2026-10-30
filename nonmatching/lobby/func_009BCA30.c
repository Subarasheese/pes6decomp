/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 func_009BCA30(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 1) {
            return M2C_FIELD(arg0, s8 *, 0x1E1);
        }
        return 0;
    }
    return 0;
}
