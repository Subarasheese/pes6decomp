/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00();                              /* extern */

u8 func_00B02860(void) {
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u8 *, 7);
    }
    return 0U;
}
