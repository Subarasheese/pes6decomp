/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00811A80(M2C_UNK, void *);             /* extern */

s32 func_00811C20(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 3) != 0) {
        func_00811A80(6, arg0);
    }
    return 0;
}
