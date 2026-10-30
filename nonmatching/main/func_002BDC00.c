/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002BDC00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0 + arg2;
    temp_v0 = arg1 + arg3;
    if (temp_v0 < temp_v1) {
        return 0;
    }
    if (temp_v1 >= temp_v0) {
        return 2;
    }
    return 1;
}
