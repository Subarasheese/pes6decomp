/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */
M2C_UNK func_0095CC20(s32, s32);                    /* extern */

s32 func_0095CD80(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00936B90();
    temp_v0 = func_0082C2A0();
    if (temp_v0 == 0) {
        return 1;
    }
    if (temp_s0 != 0) {
        func_0095CC20(temp_s0 + 0x3F6C0, temp_v0 + 0x14FF8);
        return 4;
    }
    return 1;
}
