/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994760();                              /* extern */

void func_00B22310(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00994760();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x61AB8) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x61AB8) + arg0);
    }
}
