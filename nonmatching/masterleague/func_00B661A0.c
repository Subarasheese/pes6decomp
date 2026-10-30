/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B64F60(void);
M2C_UNK func_00972CD0(s32);                         /* extern */

void func_00B661A0(void) {
    u32 temp_v0;

    temp_v0 = func_00B64F60();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s16 *, 0x430) < 0x17)) {
        func_00972CD0(M2C_FIELD(temp_v0, s32 *, 0x42C));
    }
}
