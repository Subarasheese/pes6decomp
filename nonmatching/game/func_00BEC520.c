/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003EA7AD;

u8 func_00BEC520(void) {
    if ((D_003EA7AD == 0) || ((s32) D_003EA7AD >= 0x17)) {
        D_003EA7AD = 0xFF;
    }
    return D_003EA7AD;
}
