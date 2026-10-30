/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DF18;

s32 func_009E5FB0(void) {
    if (D_00A7DF18 != NULL) {
        if ((M2C_FIELD(D_00A7DF18, u8 *, 0x135) * 0xA) >= 3) {
            return 1;
        }
        return 4;
    }
    return 0;
}
