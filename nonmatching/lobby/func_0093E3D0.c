/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s8 func_0093E3D0(s32 arg0) {
    u32 *var_a0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a0 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        if ((u32) *var_a0 < 0x15U) {
            return M2C_FIELD(((arg0 * 0x168) + var_a0), s8 *, 8);
        }
        return 0;
    }
    return 0;
}
