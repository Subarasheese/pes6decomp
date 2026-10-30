/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00835EE0();                                /* extern */

s8 func_00835D10(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a0;
    void *var_v0;

    temp_s0 = func_00835EE0();
    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_a0 = temp_v0 + 0x12230;
    } else {
        var_a0 = 0;
    }
    if (var_a0 == 0) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < temp_s0) {
        var_v0 = var_a0 + (arg0 * 0xC8);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s8 *, 0x7D);
    }
    return 0;
}
