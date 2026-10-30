/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C22C20();                                /* extern */
extern s32 (*D_00C9F23C)();

s32 func_00C22D80(void) {
    if (D_00C9F23C != NULL) {
        if ((D_00C9F23C() == 1) && (D_00C9F23C == NULL)) {
            return 1;
        }
        goto block_4;
    }
    D_00C9F23C = func_00C22C20;
block_4:
    return 0;
}
