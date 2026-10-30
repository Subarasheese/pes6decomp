/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0096F770();                                /* extern */
s32 func_00B05280(s32);                             /* extern */

s32 func_00B05210(s32 arg0) {
    s32 var_v0;

    if (func_0096F770() == 0) {
        var_v0 = (func_00B05280(arg0) & 0xFFFF) * 8;
    } else {
        var_v0 = (func_00B05280(arg0) & 0xFFFF) * 0xC;
    }
    return var_v0 & 0xFFFF & 0xFFFF;
}
