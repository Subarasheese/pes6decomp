/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B0FD0(void);
s32 func_0095ED20();                                /* extern */

s32 func_009B0EB0(void) {
    u32 temp_v0;

    temp_v0 = func_009B0FD0();
    if (temp_v0 == 0) {
        return 0;
    }
    if (func_0095ED20() != 0) {
        M2C_FIELD(temp_v0, s8 *, 0x5FA) = 3;
        return 0;
    }
    return 0;
}
