/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E66C0(void *arg0) {
    s32 (*temp_v0)(s32);

    temp_v0 = M2C_FIELD(arg0, s32 (**)(s32), 0x14);
    if (temp_v0 != NULL) {
        return temp_v0(M2C_FIELD(arg0, s32 *, 0));
    }
    return 0;
}
