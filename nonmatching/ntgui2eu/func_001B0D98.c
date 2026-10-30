/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B3320();                                /* extern */

s32 func_001B0D98(M2C_UNK arg0, void *arg1) {
    s32 temp_v0;

    if (M2C_FIELD(arg1, s32 *, 8) == 0) {
        M2C_FIELD(arg1, s32 *, 4) = 0;
        return 0;
    }
    temp_v0 = func_001B3320();
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    return temp_v0;
}
