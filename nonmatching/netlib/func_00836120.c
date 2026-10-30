/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00836120(void) {
    s32 temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        return M2C_FIELD(temp_v0, s32 *, 0x117F0);
    }
    return 0;
}
