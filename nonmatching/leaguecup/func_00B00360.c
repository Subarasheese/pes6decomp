/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0095A990(u8, M2C_UNK);                     /* extern */
extern void *D_003EAD54;

s32 func_00B00360(void) {
    if (D_003EAD54 != NULL) {
        return (func_0095A990(M2C_FIELD(D_003EAD54, u8 *, 0x810), 3) & 0xFF) >= 2;
    }
    return 0;
}
