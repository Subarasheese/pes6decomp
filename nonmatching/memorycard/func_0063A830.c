/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9DF8;

s32 func_0063A830(void) {
    if ((D_003E9DF8 != 0xC) && (D_003E9DF8 != 0xD) && (D_003E9DF8 != 0xE)) {
        if ((u32) (D_003E9DF8 - 0x1C) >= 3U) {
            return 0;
        }
        goto block_6;
    }
block_6:
    return 1;
}
