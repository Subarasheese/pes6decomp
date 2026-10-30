/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u16 *D_003EA764;

s64 func_00C227A0(void) {
    s64 var_a0;
    u16 temp_v1;

    if (D_003EA764 == NULL) {
        return -1;
    }
    temp_v1 = *D_003EA764;
    var_a0 = 0;
    if ((((s32) temp_v1 >> 3) & 1) && !(((s32) temp_v1 >> 5) & 1)) {
        var_a0 = 1;
    }
    return (s64) (var_a0 << 0x38) >> 0x38;
}
