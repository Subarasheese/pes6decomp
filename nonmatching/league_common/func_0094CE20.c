/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00224520();                              /* extern */

void func_0094CE20(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (((arg0 & 0xFF) < 0x50) && ((arg1 & 0xFF) < 0x20)) {
        temp_v0 = func_00224520();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 2) = 0;
        }
    }
}
