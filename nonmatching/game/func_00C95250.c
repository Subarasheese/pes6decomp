/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4650(void);
extern u8 func_009B45F0(void);
M2C_UNK func_00C952F0();                            /* extern */

s32 func_00C95250(void) {
    if ((func_009B45F0() != 0) && ((func_009B4650() & 0xFF) == 4)) {
        func_00C952F0();
        return 0;
    }
    return 1;
}
