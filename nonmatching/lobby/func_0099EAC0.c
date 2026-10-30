/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099EAC0(void *arg0, s64 arg1) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x96) != ((s64) (arg1 << 0x38) >> 0x38)) {
            M2C_FIELD(arg0, s8 *, 0x96) = -1;
            M2C_FIELD(arg0, s8 *, 0x97) = 1;
        }
        return 0;
    }
    return 5;
}
