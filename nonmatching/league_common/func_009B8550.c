/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B8650();                                /* extern */
extern s32 D_003EA9BC;

s32 func_009B8550(void) {
    if (D_003EA9BC == 0) {
        return 1;
    }
    return func_009B8650();
}
