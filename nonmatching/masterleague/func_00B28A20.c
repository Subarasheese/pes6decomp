/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B28750();                                /* extern */
extern s32 D_003EAE2C;

s32 func_00B28A20(void) {
    if (D_003EAE2C == 0) {
        return 1;
    }
    return func_00B28750();
}
