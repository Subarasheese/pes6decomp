/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00154018();                                /* extern */
s32 func_001AD6F8(s32);                             /* extern */

s32 func_00154070(M2C_UNK arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00154018();
    if (temp_v0 == 0) {
        return arg1;
    }
    return func_001AD6F8(temp_v0);
}
