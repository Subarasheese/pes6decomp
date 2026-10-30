/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
M2C_UNK func_009712F0(s32, M2C_UNK, s32);           /* extern */

void func_00B704B0(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        func_009712F0(M2C_FIELD(temp_v0, s32 *, 0xC), 1, arg0);
    }
}
