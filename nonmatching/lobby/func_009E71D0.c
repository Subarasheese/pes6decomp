/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009EB280(s32);                             /* extern */

s32 func_009E71D0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_009EB280(arg0 + 0x10);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = temp_v0;
        return 1;
    }
    return 0;
}
