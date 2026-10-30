/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001E4E30(void);
f32 func_00C890E0(s32 arg0) {
    f32 var_f0;

    var_f0 = 0.0f;
    if (arg0 < 3) {
        var_f0 = func_001E4E30();
    }
    return var_f0;
}
