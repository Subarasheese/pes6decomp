/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DF08;

s32 func_009E4600(void) {
    u8 temp_v0;

    if (D_00A7DF08 != NULL) {
        temp_v0 = M2C_FIELD(D_00A7DF08, u8 *, 0x11C);
        if (temp_v0 != 0) {
            return temp_v0 - 1 + (M2C_FIELD(D_00A7DF08, u8 *, 0x11D) * 9);
        }
        return 0xC;
    }
    return 0xC;
}
