/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009612B0(M2C_UNK);                         /* extern */
s32 func_00B52C70(s32, M2C_UNK);                    /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B56CB0(void) {
    if (func_00B52C70(func_00B54300() & 0xFF, 3) != 0) {
        return func_009612B0(8) != 0;
    }
    return 0;
}
