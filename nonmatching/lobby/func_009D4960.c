/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009D4960(s32 arg0) {
    if (arg0 < 0) {
        return 4;
    }
    if (arg0 != 0) {
        if (arg0 >= 0x32) {
            if (arg0 >= 0x64) {
                return 0;
            }
            return 1;
        }
        return 2;
    }
    return 3;
}
