/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B49760(void);
s32 func_00B44B50(void) {
    u32 temp_v0;

    temp_v0 = func_00B49760();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s8 *, 0xC) = 1;
    }
    return 0;
}
