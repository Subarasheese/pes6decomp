/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B08D0();                                /* extern */
extern s32 D_003EA9AC;

s32 func_009B1100(void) {
    if (D_003EA9AC == 0) {
        return 1;
    }
    return func_009B08D0();
}
