/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
M2C_UNK func_00B5C2D0(M2C_UNK);                     /* extern */

s32 func_00B5C230(void) {
    u32 temp_v0;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x62A) == 0) {
            func_00B5C2D0(1);
        }
    }
    return 0;
}
