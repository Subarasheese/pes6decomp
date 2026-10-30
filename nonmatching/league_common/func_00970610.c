/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00970870();                              /* extern */

s32 func_00970610(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00970870();
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, u16 *, 0x3C) & 0x1FF;
        if (var_v0 == 0x69) {
            var_v0 = 0x11A;
        }
        return var_v0;
    }
    return 0x11A;
}
