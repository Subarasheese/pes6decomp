/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
void func_002DB580(void *arg0, u8 arg1) {
    u8 var_v1;

    if (arg0 != NULL) {
        func_001F3D10(M2C_FIELD(arg0, s32 *, 0x38), arg1);
        if ((arg1 & 0xFF) != 1) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0xC) & 0xEF;
        } else {
            var_v1 = M2C_FIELD(arg0, u8 *, 0xC) | 0x10;
        }
        M2C_FIELD(arg0, u8 *, 0xC) = var_v1;
    }
}
