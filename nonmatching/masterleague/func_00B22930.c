/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B22A90(void);
s32 func_00B22930(void) {
    u32 temp_v0;

    temp_v0 = func_00B22A90();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x4C) = 2;
    }
    return 0;
}
