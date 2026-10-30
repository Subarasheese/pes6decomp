/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00231240();                                /* extern */
extern s32 D_003E77AC;

s32 func_00226000(void) {
    s32 var_s0;
    s32 var_s0_2;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0_2 = 0;
        } else {
            var_s0_2 = D_003E77AC + 0x42A50;
        }
    } else {
        var_s0_2 = 0;
    }
    if (func_00231240() == 1) {
        goto block_13;
    }
    if (var_s0_2 != 0) {
        var_s0 = var_s0_2 + 0xBB4;
    } else {
block_13:
        var_s0 = 0;
    }
    if (func_00231240() == 1) {
        return 0;
    }
    if (var_s0 == 0) {
        var_s0 = 0;
    }
    return var_s0;
}
