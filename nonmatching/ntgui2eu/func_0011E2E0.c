/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011D090();                            /* extern */

void func_0011E2E0(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x2C4);
    M2C_FIELD(arg0, s32 *, 0x2C4) = 0;
    func_0011D090();
    M2C_FIELD(arg0, s32 *, 0x2C4) = temp_s1;
}
