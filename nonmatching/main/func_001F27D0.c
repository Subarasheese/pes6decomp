/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_001F27D0(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        if ((arg1 & 0xFF) >= 2) {
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x48) = arg1;
        M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | 1);
    }
}
