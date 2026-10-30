/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008BEC20(void *);                          /* extern */

s32 func_008BEBD0(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    if (arg2 != NULL) {
        return func_008BEC20(arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + 0x7D5);
    }
    return 0;
}
