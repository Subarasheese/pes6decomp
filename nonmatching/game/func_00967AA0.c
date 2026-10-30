/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00967AA0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
        return 1;
    }
    return 0;
}
