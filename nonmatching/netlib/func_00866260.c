/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00866260(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return -0x1B;
    }
    M2C_FIELD(arg0, s32 *, 0x117E4) = arg1;
    return 0;
}
