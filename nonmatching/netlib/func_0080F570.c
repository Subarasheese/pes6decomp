/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA26C;

s32 func_0080F570(s32 arg0) {
    if (D_003EA26C == NULL) {
        return 0;
    }
    M2C_FIELD(D_003EA26C, s8 *, 0x3F) = -1;
    return arg0;
}
