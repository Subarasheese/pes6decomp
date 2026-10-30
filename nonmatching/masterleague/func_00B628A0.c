/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
s32 func_00B628A0(void) {
    u32 temp_v0;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x4BC) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x4BD) != 1) {
                M2C_FIELD(temp_v0, u8 *, 0x4BC) = 7U;
            }
        }
    }
    return 0;
}
