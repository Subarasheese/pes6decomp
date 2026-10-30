/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B71650(M2C_UNK);                     /* extern */

s32 func_00B71550(void) {
    u32 temp_v0;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if ((M2C_FIELD(temp_v0, u8 *, 0x1C) == 1) || (M2C_FIELD(temp_v0, u8 *, 0x1D) == 1)) {
                func_0026E840(0x8C008005);
            } else {
                func_00B71650(1);
            }
        }
    }
    return 0;
}
