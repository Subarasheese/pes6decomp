/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B36410(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */

s32 func_00B362C0(void) {
    u32 temp_v0;

    temp_v0 = func_00B36410();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 4) = 2;
        func_00958000(0x80);
        return 0;
    }
    return 1;
}
