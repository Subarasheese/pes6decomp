/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCC670(M2C_UNK);                         /* extern */

s32 func_00BCC980(void) {
    s32 sp28;
    s32 sp2C;
    s32 temp_v0;

    sp28 = func_00BCC670(0);
    temp_v0 = func_00BCC670(1);
    sp2C = temp_v0;
    if ((sp28 != 1) && (temp_v0 != 1)) {
        if ((sp28 != 2) && (temp_v0 != 2)) {
            return 0;
        }
        return 2;
    }
    return 1;
}
