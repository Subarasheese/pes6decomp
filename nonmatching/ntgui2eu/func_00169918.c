/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016B360(s32, s32);                        /* extern */

s32 func_00169918(void *arg0, s32 arg1) {
    if ((arg1 != 0) && (func_0016B360(arg1, M2C_FIELD(arg0, s32 *, 0x848)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x854) = (s32) (M2C_FIELD(arg0, s32 *, 0x854) + 1);
        return 1;
    }
    return 0;
}
