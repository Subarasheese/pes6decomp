/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00842640();                              /* extern */

s32 func_00964590(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00842640();
    if (temp_v0 != NULL) {
        if (arg0 != 1) {
            M2C_FIELD(temp_v0, s8 *, 0xA) = 1;
        } else {
            M2C_FIELD(temp_v0, s8 *, 0xA) = 0;
        }
        return 1;
    }
    return -1;
}
