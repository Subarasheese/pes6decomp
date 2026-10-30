/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

u8 func_0093E8C0(s32 arg0, s32 arg1, s32 arg2) {
    u32 *var_a1;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a1 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_a1 = NULL;
    }
    if (var_a1 != NULL) {
        if ((u32) *var_a1 < 0x15U) {
            return M2C_FIELD((arg2 + ((arg1 * 5) + ((arg0 * 0x168) + var_a1))), u8 *, 0x160);
        }
        return 0U;
    }
    return 0U;
}
