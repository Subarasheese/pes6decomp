/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BEEB60();                                /* extern */

s32 func_00BEEFD0(M2C_UNK arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_00BEEB60();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x60);
    if ((temp_v1 != 0) && (temp_v1 != (temp_v1 & temp_v0))) {
        return 0;
    }
    return 1;
}
