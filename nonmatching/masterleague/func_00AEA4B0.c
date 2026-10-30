/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_00AEA520(M2C_UNK);                     /* extern */
M2C_UNK func_00AEA700(M2C_UNK);                     /* extern */

s32 func_00AEA4B0(void) {
    u32 temp_v0;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3DB5) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x59F4) == 1) {
                func_00AEA520(1);
            } else {
                func_00AEA700(1);
            }
        }
    }
    return 0;
}
