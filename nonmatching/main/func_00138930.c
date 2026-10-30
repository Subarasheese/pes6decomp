/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00138930(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg0, s32 *, 0x10)) {
        return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 8) * 0x13C680);
    }
    return 0;
}
