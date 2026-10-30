/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BC8D0(s32, s32);                    /* extern */

s32 func_0099E3F0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        return 5;
    }
    if (arg1 < 0) {
        return 5;
    }
    if (arg1 < 3) {
        func_009BC8D0(M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x28), arg2);
        return 0;
    }
    return 5;
}
