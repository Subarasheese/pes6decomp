/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009AE900(void);
s32 func_009ADEE0(void) {
    u32 temp_v0;

    temp_v0 = func_009AE900();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s8 *, 0x5E2) = 3;
    }
    return 0;
}
