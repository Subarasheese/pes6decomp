/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
M2C_UNK func_00B761C0(M2C_UNK);                     /* extern */

s32 func_00B76120(void) {
    u32 temp_v0;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x79C) == 0) {
            func_00B761C0(1);
        }
    }
    return 0;
}
