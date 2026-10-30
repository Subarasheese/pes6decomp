/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC7D0(void);
extern s32 func_002F7970(void);
s32 func_0087DD80();                                /* extern */

s32 func_0026AD30(void) {
    if (func_002F7970() != 0) {
        if (func_001FC7D0() != 1) {
            return 0;
        }
        return func_0087DD80();
    }
    return 0;
}
