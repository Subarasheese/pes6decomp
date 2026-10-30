/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0088AB70[];

s32 func_00805950(void) {
    if (((void *)D_0088AB70) == NULL) {
        return 0;
    }
    if (((void *)D_0088AB70) != NULL) {
        M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 2;
    }
    return 1;
}
