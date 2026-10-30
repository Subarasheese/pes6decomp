/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189778(s32);                         /* extern */

void func_001664A0(void *arg0) {
    func_00189778(arg0 + 0x540);
    M2C_FIELD(arg0, s32 *, 0x53C) = 0;
}
