/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00229010(s32);                             /* extern */

s32 func_00B61180(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 < 4) {
        var_v0 = func_00229010(((arg1 & 0xFF) + (temp_v0 * 0x10)) & 0xFF);
    } else if (temp_v0 >= 5) {
        var_v0 = func_00229010(((arg1 & 0xFF) + 0x48) & 0xFF);
    } else {
        var_v0 = func_00229010(((arg1 & 0xFF) + 0x40) & 0xFF);
    }
    return var_v0 & 0xFF;
}
