/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
M2C_UNK func_00B62B00(M2C_UNK, M2C_UNK);            /* extern */

s32 func_00B62A10(void) {
    u32 temp_v0;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x4BC) == 0) {
            func_00B62B00(1, 0);
        }
    }
    return 0;
}
