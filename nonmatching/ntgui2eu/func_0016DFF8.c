/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A128(s32, M2C_UNK, s32, s32);      /* extern */

void func_0016DFF8(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_0016A128(arg0 + 0x910, 1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x91C) = 0;
    M2C_FIELD(arg0, s32 *, 0x918) = 0;
}
