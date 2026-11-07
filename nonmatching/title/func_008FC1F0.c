/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00104AA8(s32);                         /* extern */

s32 func_008FC1F0(void *arg0) {
    func_00104AA8(M2C_FIELD(arg0, s32 *, 0x40) + 0x68);
    return 1;
}
