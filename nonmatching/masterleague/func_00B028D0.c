/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00();                              /* extern */

s32 func_00B028D0(void) {
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 6) & 0x3F;
        if (temp_v1 != 1) {
            return temp_v1 == 5;
        }
        return 1;
    }
    return 0;
}
