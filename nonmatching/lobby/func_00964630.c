/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00842640();                              /* extern */

s32 func_00964630(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00842640();
    if (temp_v0 == NULL) {
        return -1;
    }
    if (arg0 != 0) {
        M2C_FIELD(temp_v0, s8 *, 8) = 1;
    } else {
        M2C_FIELD(temp_v0, s8 *, 8) = 0;
    }
    return 1;
}
