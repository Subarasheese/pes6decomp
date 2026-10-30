/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154F98(s32);
s32 func_00623890(void *arg0) {
    if ((M2C_FIELD(arg0, s16 *, 2) != 0) && (func_00154F98(M2C_FIELD(arg0, s16 *, 0) + 2) != 1)) {
        return 0;
    }
    return 1;
}
