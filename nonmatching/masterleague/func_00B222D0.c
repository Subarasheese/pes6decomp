/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994760();                              /* extern */

s32 func_00B222D0(void) {
    void *temp_v0;

    temp_v0 = func_00994760();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0x61AB8);
    }
    return 0;
}
