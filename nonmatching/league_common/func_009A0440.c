/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099F030();                                /* extern */
extern s32 D_003EA994;

s32 func_009A0440(void) {
    if (D_003EA994 == 0) {
        return 1;
    }
    return func_0099F030();
}
