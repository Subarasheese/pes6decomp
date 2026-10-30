/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_00960520(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, s32 *, 0x153BC);
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return 1;
    }
    return 0;
}
