/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_002293F0(void) {
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
    if (func_00231240() == 1) {
        return 0;
    }
    if (var_s0 == 0) {
        var_s0 = 0;
    }
    return var_s0;
}
