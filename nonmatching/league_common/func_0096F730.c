/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00224E20(s32, s32);                      /* extern */
s32 func_0096F810();                                /* extern */

u16 func_0096F730(M2C_UNK arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00224E20(func_0096F810(), arg1);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u16 *, 4);
    }
    return 0U;
}
