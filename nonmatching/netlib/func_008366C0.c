/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s16 func_008366C0(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;
    void *var_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0x16144;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < 4) {
        var_v0 = var_v1 + (arg0 * 0x18);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s16 *, 0x12);
    }
    return 0;
}
