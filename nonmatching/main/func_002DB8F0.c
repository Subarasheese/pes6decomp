/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DB8F0(void *arg0) {
    s16 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0);
        if (temp_v1 != 0) {
            if (M2C_FIELD(arg0, s16 *, 2) < temp_v1) {
                return (((s32) M2C_FIELD(arg0, u8 *, 0xC) >> 3) & 1) != 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
