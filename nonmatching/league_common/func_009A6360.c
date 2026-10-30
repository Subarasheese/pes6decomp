/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A6C00(s32, s32);                        /* extern */
extern void *D_003EA998;

s32 func_009A6360(void) {
    void *temp_v0;

    if (D_003EA998 != NULL) {
        temp_v0 = M2C_FIELD(D_003EA998, void **, 8);
        if (temp_v0 != NULL) {
            return func_009A6C00(M2C_FIELD(D_003EA998, s32 *, 0xC), M2C_FIELD(temp_v0, s32 *, 0x14));
        }
        return 0x6D;
    }
    return 0x6D;
}
