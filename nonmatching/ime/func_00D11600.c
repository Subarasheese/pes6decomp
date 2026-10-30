/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D0AB70();                            /* extern */

s32 func_00D11600(void *arg0) {
    if (arg0 == NULL) {
        return 2;
    }
    func_00D0AB70();
    M2C_FIELD(arg0, s8 *, 0xD8C) = 1;
    return 0;
}
