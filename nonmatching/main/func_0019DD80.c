/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 *D_005202E0;

void func_0019DD80(s32 arg0, s32 arg1) {
    s32 temp_a0;

    if (D_005202E0 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 >= (s32) *D_005202E0) {
            return;
        }
        M2C_FIELD(((temp_a0 * 0x64) + D_005202E0), s32 *, 0x1C) = arg1;
    }
}
