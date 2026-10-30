/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00CEA7A0(void *arg0, f32 fparg0) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x50) = fparg0;
    return 1;
}
