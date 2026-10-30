/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099EA40(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            return M2C_FIELD(arg0, s32 *, 0x34);
        }
        return -1;
    }
    return -1;
}
