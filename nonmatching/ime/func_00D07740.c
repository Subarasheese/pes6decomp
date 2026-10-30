/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07740(void *arg0, f32 fparg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x34) = fparg0;
        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
        return 1;
    }
    return 0;
}
