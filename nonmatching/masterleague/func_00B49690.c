/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B49C70();                                /* extern */
extern s32 D_003EAE74;

s32 func_00B49690(void) {
    if (D_003EAE74 == 0) {
        return 1;
    }
    return func_00B49C70();
}
