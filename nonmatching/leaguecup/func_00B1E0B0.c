/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD8C;

s32 func_00B1E0B0(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    u8 temp_v0;

    if (D_003EAD8C != NULL) {
        temp_v0 = M2C_FIELD(D_003EAD8C, u8 *, 0x328);
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 >= (s32) temp_v0) {
            var_v0 = (temp_v1 - temp_v0) & 0xFF;
            if (var_v0 >= 0xB) {
                var_v0 = 0xFF;
            }
            return var_v0;
        }
        return 0xFF;
    }
    return 0xFF;
}
