/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAEF8;

s32 func_00B6DDA0(void) {
    if (D_003EAEF8 != NULL) {
        M2C_FIELD(D_003EAEF8, s16 *, 0xA6) = 0;
    }
    return 0;
}
