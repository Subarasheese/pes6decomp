/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCBE04;

u8 func_00C76F60(void) {
    u8 var_v0;

    var_v0 = 0;
    if (D_00CCBE04 != NULL) {
        var_v0 = M2C_FIELD(D_00CCBE04, u8 *, 0x10);
    }
    return var_v0;
}
