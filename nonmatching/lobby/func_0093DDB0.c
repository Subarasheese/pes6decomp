/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00950E50(s32);                             /* extern */
s32 func_009527B0(s32);                             /* extern */
s64 func_00952B70(s32);                             /* extern */

s32 func_0093DDB0(s32 arg0) {
    s32 var_s0;
    s64 temp_v1;

    var_s0 = 4;
    temp_v1 = (s64) (func_00952B70(arg0 & 0xFFFF) << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_s0 = 2;
        break;
    case 1:
        var_s0 = 3;
        break;
    case 0:
        if (func_00950E50(func_009527B0(arg0 & 0xFFFF)) != 0x64) {
            var_s0 = 1;
        } else {
            var_s0 = 0;
        }
        break;
    }
    return var_s0;
}
