/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF0A0(s32, s32);                    /* extern */
s32 func_002DF9D0(s32, s32);                        /* extern */

s32 func_008B9B70(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_002DF9D0(arg2, arg0);
    func_002DF0A0(temp_v0, arg1);
    return temp_v0;
}
