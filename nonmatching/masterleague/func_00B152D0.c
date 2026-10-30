/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EADF0;

s32 func_00B152D0(s32 arg0, s32 arg1) {
    if (D_003EADF0 != NULL) {
        return ((arg1 & 0xFF) + ((arg0 & 0xFF) << 5)) < (s32) M2C_FIELD(D_003EADF0, u16 *, 0xC08);
    }
    return 1;
}
