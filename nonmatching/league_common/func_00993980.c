/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00993A80(void);
s32 func_00993980(void) {
    u32 temp_v0;

    temp_v0 = func_00993A80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x258) == 2) {
            return 1;
        }
        return 0;
    }
    return 1;
}
