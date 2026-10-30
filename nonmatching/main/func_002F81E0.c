/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F81E0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        if (arg1 != 0) {
            return 1;
        }
        return 0;
    }
    if (arg1 != 0) {
        return 3;
    }
    return 2;
}
