/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

u16 func_009544B0(void) {
    s32 temp_s0;
    s32 temp_v0;
    u16 *var_v0;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        goto block_5;
    }
    if (temp_s0 != 0) {
        var_v0 = temp_v0 + 0xDC;
    } else {
block_5:
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return *var_v0;
    }
    return 0U;
}
