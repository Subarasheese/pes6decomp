/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DF18;

s32 func_009E5B50(void) {
    u8 temp_v0;

    if (D_00A7DF18 != NULL) {
        temp_v0 = M2C_FIELD(D_00A7DF18, u8 *, 0x134);
        if (temp_v0 != 0) {
            return temp_v0 - 1 + (M2C_FIELD(D_00A7DF18, u8 *, 0x135) * 0xA);
        }
        return 0xD;
    }
    return 0xD;
}
