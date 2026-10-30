/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008CC830(void);
M2C_UNK func_008CE2E0(M2C_UNK);                     /* extern */

s32 func_008CE710(void) {
    u32 temp_v0;

    temp_v0 = func_008CC830();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x20C) == 1) {

        } else {
            func_008CE2E0(1);
        }
    }
    return 0;
}
