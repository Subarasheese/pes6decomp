/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B10D20(void);
M2C_UNK func_00AE8190(s32);                         /* extern */

s32 func_00AEB970(void) {
    u32 temp_v0;

    temp_v0 = func_00B10D20();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x9C) != 0) {
            func_00AE8190(M2C_FIELD(temp_v0, s32 *, 0x58));
        }
    }
    return 0;
}
