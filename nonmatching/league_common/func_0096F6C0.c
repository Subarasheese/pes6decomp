/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00();                              /* extern */

u64 func_0096F6C0(void) {
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 != NULL) {
        return (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 5) << 0x38) >> 0x3A;
    }
    return 0U;
}
