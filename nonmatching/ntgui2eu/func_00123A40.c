/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B016C(s32, s32);                        /* extern */

s32 func_00123A40(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 & 4) {
        return func_001B016C(arg1, arg2);
    }
    return -1;
}
