/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009AB630(void);
M2C_UNK func_009AB240(M2C_UNK);                     /* extern */

s32 func_009AB1F0(void) {
    u32 temp_v0;

    temp_v0 = func_009AB630();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x5B2) == 0) {
            func_009AB240(-1);
        }
    }
    return 0;
}
