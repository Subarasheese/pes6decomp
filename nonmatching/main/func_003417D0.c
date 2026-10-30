/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003417D0(void *arg0) {
    u8 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1 != 3) && (temp_v1 != 0xD)) {
            return 0;
        }
        return 1;
    }
    return 0;
}
