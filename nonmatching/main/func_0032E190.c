/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0032E190(s32 *arg0, f32 fparg0) {
    s32 var_v0;

    if (!(fparg0 < -5160.0f)) {
        if (!(fparg0 < -2344.0f)) {
            if (!(fparg0 < 2344.0f)) {
                if (!(fparg0 < 5160.0f)) {
                    if (fparg0 <= 8217.0f) {
                        var_v0 = 6;
                    } else {
                        var_v0 = 7;
                    }
                } else {
                    var_v0 = 5;
                }
            } else {
                var_v0 = 4;
            }
        } else {
            var_v0 = 3;
        }
    } else if (!(fparg0 < -8217.0f)) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    *arg0 = var_v0;
    return 1;
}
