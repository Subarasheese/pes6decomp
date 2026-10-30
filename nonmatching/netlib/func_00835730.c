/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00D0BAF0();                              /* extern */

s32 func_00835730(void) {
    void *temp_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u8 *, 0x16246) == 0;
    }
    return 0;
}
