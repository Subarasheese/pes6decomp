/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
s32 func_0099B6E0(M2C_UNK, s32);                    /* extern */
s32 func_00B04E90();                                /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B58F80(void) {
    s32 temp_a0;
    s32 temp_v0;

    if (func_0099B6E0(4, func_00B54300() & 0xFF) == 0) {
        return 0;
    }
    if (func_00B54300() >= 0x2B) {
        return 0;
    }
    temp_a0 = func_00225820() & 0xFF;
    if (temp_a0 == 0xFF) {
        return 0;
    }
    temp_v0 = func_002260F0(temp_a0);
    if (temp_v0 == 0) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x34) < func_00B04E90();
}
