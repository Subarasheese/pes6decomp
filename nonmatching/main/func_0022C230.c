/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 D_003E77AC;

u8 func_0022C230(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    if ((func_00309420() != 0) != 1) {
        var_a0 = D_003E77AC + 0xC;
    } else {
        var_a0 = 0;
    }
    temp_v1 = arg0 & 0xFF;
    if ((temp_v1 != 0) && (temp_v1 != 1)) {
        return 0U;
    }
    if (var_a0 != 0) {
        return M2C_FIELD(((arg0 & 0xFF) + var_a0), u8 *, 0x1543);
    }
    return 0U;
}
