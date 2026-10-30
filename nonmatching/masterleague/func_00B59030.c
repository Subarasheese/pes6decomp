/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B56910(s32);                             /* extern */
s32 func_00B569A0();                                /* extern */

s32 func_00B59030(s32 arg0) {
    if ((((s64) ((func_00B569A0() & 0xFF) << 0x38) >> 0x38) == 0) && (((s64) ((func_00B56910(arg0) & 0xFF) << 0x38) >> 0x38) == 1)) {
        return 1;
    }
    return 0;
}
