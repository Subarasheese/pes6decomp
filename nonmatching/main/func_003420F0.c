/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001BE450();                                /* extern */
s32 func_001F87D0();                                /* extern */
s32 func_001FC7A0(M2C_UNK);                         /* extern */
s32 func_0030EFB0();                                /* extern */

s32 func_003420F0(void) {
    s32 var_v0;

    var_v0 = func_001FC7A0(0xA) != 0;
    if (var_v0 != 0) {
        var_v0 = func_0030EFB0() == 0;
    }
    if (var_v0 != 0) {
        var_v0 = func_001F87D0() != 0;
    }
    if (var_v0 != 0) {
        var_v0 = func_001BE450() == 1;
    }
    return var_v0;
}
