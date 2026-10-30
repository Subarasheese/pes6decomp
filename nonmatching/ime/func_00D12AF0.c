/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D12AF0(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0xD8D) = arg1;
        M2C_FIELD(arg0, s8 *, 0xD8C) = 1;
        return 0;
    }
    return 2;
}
