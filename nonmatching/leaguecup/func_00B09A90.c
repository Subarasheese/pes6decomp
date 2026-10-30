/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A9F0(void);
M2C_UNK func_00B09B30(M2C_UNK);                     /* extern */

s32 func_00B09A90(void) {
    u32 temp_v0;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x5D8) == 0) {
            func_00B09B30(1);
        }
    }
    return 0;
}
