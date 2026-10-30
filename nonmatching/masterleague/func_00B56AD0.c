/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B542D0();                                /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B56AD0(void) {
    s32 temp_s0;

    temp_s0 = func_00B54300();
    if ((func_00B542D0() == 1) && (temp_s0 == 0)) {
        return 1;
    }
    return 0;
}
