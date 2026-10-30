/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
M2C_UNK func_00B101D0();                            /* extern */

s32 func_00B0EE10(void) {
    u32 temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x141C) == 4) {
            return 1;
        }
        func_00B101D0();
        return 0;
    }
    return 1;
}
