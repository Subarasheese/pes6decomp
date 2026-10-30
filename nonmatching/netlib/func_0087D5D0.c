/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA384;

s32 func_0087D5D0(void) {
    if (D_003EA384 != NULL) {
        M2C_FIELD(D_003EA384, u8 *, 8) = (u8) (M2C_FIELD(D_003EA384, u8 *, 8) | 0x10);
        M2C_FIELD(D_003EA384, u8 *, 8) = (u8) (M2C_FIELD(D_003EA384, u8 *, 8) | 0x40);
        return 0;
    }
    return 1;
}
