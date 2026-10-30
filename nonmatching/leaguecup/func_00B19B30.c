/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B19B30(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s32 *, 0x2C) != 0;
    }
    return 0;
}
