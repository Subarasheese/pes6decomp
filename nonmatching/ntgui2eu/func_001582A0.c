/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001582A0(s32 arg0) {
    if (arg0 != 1) {
        if (arg0 < 2) {
            if (arg0 != 0) {
                return 4;
            }
            return 0;
        }
        switch (arg0) {                             /* irregular */
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return 4;
        }
    } else {
        return 1;
    }
}
