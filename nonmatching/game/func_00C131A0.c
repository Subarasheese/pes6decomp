/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C131A0(u32 arg0, u32 arg1, s32 (*arg2)(u32)) {
    s32 temp_v0;
    s32 var_s0;
    u32 var_s3;

    var_s0 = 0;
    if ((arg2 != NULL) && (arg0 != -1U) && (arg1 != -1U)) {
        var_s3 = arg0;
        if (arg0 < arg1) {
            do {
                temp_v0 = arg2(var_s3) != 0;
                var_s3 += 4;
                var_s0 += temp_v0;
            } while (var_s3 < arg1);
        }
    }
    return var_s0;
}
