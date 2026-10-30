/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EADF0;

s32 func_00B15290(s32 arg0) {
    s32 var_v0;

    if (D_003EADF0 != NULL) {
        var_v0 = M2C_FIELD(D_003EADF0, u16 *, 0xC08) - ((arg0 & 0xFF) << 5);
        if (var_v0 >= 0x21) {
            var_v0 = 0x20;
        }
        return var_v0;
    }
    return 0;
}
