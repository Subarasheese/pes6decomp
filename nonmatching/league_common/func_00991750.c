/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00991750(void) {
    u32 temp_v0;

    temp_v0 = func_00991950();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x478) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x4AC) == 0) {
                M2C_FIELD(temp_v0, s32 *, 0x4AC) = 1;
                func_0026E840(0x84008401);
            }
        }
    }
    return 0;
}
