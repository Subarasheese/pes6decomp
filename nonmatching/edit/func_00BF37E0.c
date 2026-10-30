/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246550(s32);                             /* extern */

s32 func_00BF37E0(s32 arg0) {
    if (arg0 < 0x4A) {
        return 1;
    }
    return func_00246550(arg0 + 0x72);
}
