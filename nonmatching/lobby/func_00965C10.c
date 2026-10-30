/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00840A10();                                /* extern */
s32 func_009523D0(s32);                             /* extern */
s64 func_00952630(s32);                             /* extern */
s32 func_009526F0(s32);                             /* extern */

s32 func_00965C10(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    s64 temp_v1;

    temp_v0 = func_00840A10();
    if (temp_v0 != 0) {
        temp_s0 = func_009523D0(temp_v0) & 0xFFFF;
        var_s0 = func_009526F0(temp_s0);
        temp_v1 = (s64) (func_00952630(temp_s0) << 0x38) >> 0x38;
        switch (temp_v1) {                          /* irregular */
        case 3:
        case 2:
        case 1:
            break;
        default:
        case 4:
        case 0:
            var_s0 = 0;
            break;
        }
        return var_s0;
    }
    return 0;
}
