/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002F7F80(u8);                              /* extern */
void *func_002F82D0(M2C_UNK, s32, s32, M2C_UNK);    /* extern */

s32 func_002F7F30(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_002F82D0(3, arg0, arg1, 0);
    if (temp_v0 != NULL) {
        return func_002F7F80(M2C_FIELD(temp_v0, u8 *, 3));
    }
    return 0;
}
