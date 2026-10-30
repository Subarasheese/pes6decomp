/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

s32 func_00B0C3D0(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    if (D_003EAD68 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 < (s32) M2C_FIELD(D_003EAD68, u8 *, 0xDF8)) {
            var_v0 = (M2C_FIELD(D_003EAD68, s32 *, 0xDFC) - (temp_a0 * 0x14)) & 0xFF;
            if (var_v0 >= 0x14) {
                var_v0 = 0x14;
            }
            return var_v0;
        }
        return 0;
    }
    return 0;
}
