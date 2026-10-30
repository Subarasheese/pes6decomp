/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_00225280(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_a0 = 0;
        } else {
            var_a0 = D_003E77AC + 0x42A50;
        }
    } else {
        var_a0 = 0;
    }
    if (var_a0 != 0) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x20) {
            return var_a0 + (temp_v1 * 0x36) + 0x1F2;
        }
        return 0;
    }
    return 0;
}
