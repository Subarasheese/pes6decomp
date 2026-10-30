/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00842650();                              /* extern */

s32 func_009660B0(s8 arg0) {
    void *temp_v0;

    temp_v0 = func_00842650();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0xC) = arg0;
        return 1;
    }
    return -1;
}
