/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008C13D0(s32, M2C_UNK, s32);               /* extern */

void func_008C59E0(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = func_008C13D0(temp_a0, 0x91, arg1);
    }
}
