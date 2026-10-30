/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_00229280(s32 arg0) {
    s32 var_s0;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0 = 0;
        } else {
            var_s0 = D_003E77AC + 0x7980;
        }
    } else {
        var_s0 = 0;
    }
    if (func_00231240() != 1) {
        if (arg0 < 0x14) {
            return var_s0 + (arg0 * 0xC) + 0x4AB6;
        }
        return 0;
    }
    return 0;
}
