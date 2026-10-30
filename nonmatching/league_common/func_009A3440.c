/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A0430(void);
M2C_UNK func_00973C70(s32, s32);                    /* extern */

void func_009A3440(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_009A0430();
    if (temp_v0 != 0) {
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x1AC), temp_v0 + ((arg0 & 0xFF) * 0x10) + 0x218);
    }
}
