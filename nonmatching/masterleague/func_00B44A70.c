/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B49760(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00B44A70(void) {
    u32 temp_v0;

    temp_v0 = func_00B49760();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xC) == 1) {
            func_0026E840(0x84028400);
            goto block_9;
        }
        return 0;
    }
block_9:
    return 1;
}
