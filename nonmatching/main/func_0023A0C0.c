/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FF7E0(u8);                              /* extern */
extern u8 D_003E9A2C;

s32 func_0023A0C0(void) {
    if ((s32) D_003E9A2C < 8) {
        return 0;
    }
    if (D_003E9A2C != 8) {
        return 0;
    }
    return func_008FF7E0(D_003E9A2C) & 0xFF;
}
