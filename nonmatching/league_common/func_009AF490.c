/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009AD940();                                /* extern */
extern s32 D_003EA9A8;

s32 func_009AF490(void) {
    if (D_003EA9A8 == 0) {
        return 1;
    }
    return func_009AD940();
}
