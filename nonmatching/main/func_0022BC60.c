/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

u8 func_0022BC60(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0 = 0;
        } else {
            var_s0 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_s0 = 0;
    }
    if (func_00231240() == 1) {
        return 0xFFU;
    }
    if (var_s0 != 0) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x60) {
            return M2C_FIELD((temp_v1 + var_s0), u8 *, 0xC4);
        }
        return 0xFFU;
    }
    return 0xFFU;
}
