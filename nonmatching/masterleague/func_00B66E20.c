/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B66CA0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00B66E20(void) {
    u32 temp_v0;

    temp_v0 = func_00B66CA0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x1C) == 1) {
            func_0026E840(0x84008401);
            goto block_9;
        }
        return 0;
    }
block_9:
    return 1;
}
