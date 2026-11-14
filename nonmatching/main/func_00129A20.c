/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

s16 *func_00100400();                               /* extern */

u32 func_00129A20(void *arg0) {
    if (*func_00100400() != 1) {
        goto block_1;
    }
    if (M2C_FIELD(func_00100400(), s16 *, 4) == 1) {
        return (u32) (((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x1C) << 0x29) >> 0x35) + 1) >> 1;
    }
block_1:
    return ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x1C) << 0x29) >> 0x35) + 1;
}
