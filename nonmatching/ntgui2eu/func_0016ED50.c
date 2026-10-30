/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001896B8(s32);                             /* extern */

void func_0016ED50(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x92C);
    if (temp_a0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x920) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x920) = func_001896B8(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0x92C) = 0;
}
