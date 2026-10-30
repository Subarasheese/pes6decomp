/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00840A10();                                /* extern */
s32 func_009523D0(s32);                             /* extern */
s64 func_00952870(s32);                             /* extern */

s64 func_00965A90(void) {
    s32 temp_v0;

    temp_v0 = func_00840A10();
    if (temp_v0 != 0) {
        return (s64) (func_00952870(func_009523D0(temp_v0) & 0xFFFF) << 0x30) >> 0x30;
    }
    return 0;
}
