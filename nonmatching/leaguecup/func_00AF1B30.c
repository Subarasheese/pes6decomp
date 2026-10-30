/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEFF50(void);
M2C_UNK func_00AF2B70();                            /* extern */

s32 func_00AF1B30(void) {
    u32 temp_v0;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x2330) == 4) {
            return 1;
        }
        func_00AF2B70();
        return 0;
    }
    return 1;
}
