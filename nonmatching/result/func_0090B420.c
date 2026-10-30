/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246630(s32);                             /* extern */

s32 func_0090B420(s32 arg0) {
    if (arg0 >= 0x39) {
        if (arg0 < 0x40) {
            return func_00246630(arg0 & 0xFFFF);
        }
        goto block_4;
    }
block_4:
    return 1;
}
