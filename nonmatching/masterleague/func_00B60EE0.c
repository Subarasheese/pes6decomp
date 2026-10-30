/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B61000();                                /* extern */
extern s32 D_003EAEC8;

s32 func_00B60EE0(void) {
    if (D_003EAEC8 == 0) {
        return 1;
    }
    return func_00B61000();
}
