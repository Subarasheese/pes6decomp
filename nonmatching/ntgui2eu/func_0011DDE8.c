/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011BD70();                            /* extern */

s32 func_0011DDE8(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, s32 *, 0) != 0) || (M2C_FIELD(arg1, s32 *, 4) != 0)) {
        return -1;
    }
    M2C_FIELD(arg0, void **, 0x380) = arg1;
    func_0011BD70();
    return 0;
}
