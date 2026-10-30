/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DFC30(M2C_UNK);                         /* extern */

void func_00629AA0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x148) == 0) {
        M2C_FIELD(arg0, s32 *, 0x148) = func_002DFC30(0);
    }
}
