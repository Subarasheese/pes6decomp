/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A7910(s32, f32);                        /* extern */
s32 func_009A7B90();                                /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
s32 func_009A78C0(s32 arg0, f32 fparg0) {
    s32 var_s0;

    var_s0 = func_009A7B90();
    if (func_009A7910(arg0, fparg0) == 0) {
        var_s0 = -var_s0;
    }
    return var_s0;
}
