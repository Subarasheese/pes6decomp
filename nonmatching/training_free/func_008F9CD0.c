/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F7970(void);
s32 func_0081D2C0();                                /* extern */
s32 func_0087DD80();                                /* extern */

s32 func_008F9CD0(void) {
    if (func_002F7970() != 0) {
        if (func_0087DD80() != 0) {
            return 1;
        }
        if (func_0081D2C0() == 0) {
            return 1;
        }
        goto block_6;
    }
block_6:
    return 0;
}
