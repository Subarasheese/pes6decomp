/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00303E50(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) < M2C_FIELD(arg0, s32 *, 0x44)) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0x57) = 1;
    return 1;
}
