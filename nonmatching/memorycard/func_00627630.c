/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 *func_006247E0();                               /* extern */

u16 func_00627630(s32 arg0) {
    u16 *temp_v0;

    if (arg0 == 0) {
        return 0U;
    }
    temp_v0 = func_006247E0();
    if (temp_v0 != NULL) {
        return *temp_v0;
    }
    return 0U;
}
