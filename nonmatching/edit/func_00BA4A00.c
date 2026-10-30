/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002EDF80(s32);
s32 func_00BA4A00(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_002EDF80(arg0);
    var_v1 = 1;
    if (temp_v0 != 1) {
        var_v1 = 2;
        if (temp_v0 == 2) {
            return 0;
        }
        goto block_4;
    }
block_4:
    return var_v1;
}
