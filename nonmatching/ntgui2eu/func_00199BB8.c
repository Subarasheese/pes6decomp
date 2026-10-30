/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00199BB8(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg0, s32 *, 4)) >> 4;
}
