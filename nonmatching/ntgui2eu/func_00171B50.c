/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00173B00(void *);                      /* extern */
M2C_UNK func_00174380(void *);                      /* extern */

s32 func_00171B50(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    func_00174380(arg0);
    func_00173B00(arg0);
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    return 1;
}
