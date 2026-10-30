/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
M2C_UNK func_00B4A010(M2C_UNK);                     /* extern */
M2C_UNK func_00B4A1D0(M2C_UNK);                     /* extern */

s32 func_00B49FA0(void) {
    u32 temp_v0;

    temp_v0 = func_00B490A0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x319) != 3) {
            if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 1) {
                func_00B4A010(-1);
            } else {
                func_00B4A1D0(-1);
            }
        }
    }
    return 0;
}
