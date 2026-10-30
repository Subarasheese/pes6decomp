/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A8D80(void);
s32 func_009B3050(void) {
    u32 temp_v0;

    temp_v0 = func_009A8D80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x772) == 0) {
            M2C_FIELD(temp_v0, u8 *, 0x772) = 6U;
        }
    }
    return 0;
}
