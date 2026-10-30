/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BCAC0(s32);                             /* extern */

s32 func_0099E120(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 3) {
        return func_009BCAC0(M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x28));
    }
    return 0;
}
