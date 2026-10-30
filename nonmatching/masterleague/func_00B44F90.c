/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
M2C_UNK func_00B44FE0(M2C_UNK);                     /* extern */

s32 func_00B44F90(void) {
    u32 temp_v0;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3B6) != 3) {
            func_00B44FE0(1);
        }
    }
    return 0;
}
