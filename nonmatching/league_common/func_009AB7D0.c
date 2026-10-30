/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009AAEE0();                                /* extern */
extern s32 D_003EA9A4;

s32 func_009AB7D0(void) {
    if (D_003EA9A4 == 0) {
        return 1;
    }
    return func_009AAEE0();
}
