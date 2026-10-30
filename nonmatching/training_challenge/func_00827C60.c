/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00CDCD70();                              /* extern */
s32 *func_00CECC70(s32);                            /* extern */

s32 func_00827C60(void) {
    void *temp_v0;

    temp_v0 = func_00CDCD70();
    if (temp_v0 != NULL) {
        return *func_00CECC70(M2C_FIELD(temp_v0, s32 *, 0x1C));
    }
    return 0;
}
