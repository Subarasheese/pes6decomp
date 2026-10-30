/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00965CB0(u8);                              /* extern */
extern void *D_00A7DE10;

s32 func_009D57D0(void) {
    if (D_00A7DE10 != NULL) {
        return func_00965CB0(M2C_FIELD(D_00A7DE10, u8 *, 3));
    }
    return 0;
}
