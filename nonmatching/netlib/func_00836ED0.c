/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00836ED0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 8) {
        return temp_v0 + (arg0 * 0x38) + 0xFE64;
    }
    return 0;
}
