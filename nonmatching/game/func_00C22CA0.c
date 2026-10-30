/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C229A0();                                /* extern */
extern s32 (*D_00C9F240)();

s32 func_00C22CA0(void) {
    if (D_00C9F240 != NULL) {
        if ((D_00C9F240() == 1) && (D_00C9F240 == NULL)) {
            return 1;
        }
        goto block_4;
    }
    D_00C9F240 = func_00C229A0;
block_4:
    return 0;
}
