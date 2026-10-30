/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s16 D_003EA2D0;
extern s16 D_003EA2D4;

s32 func_00843F50(s16 arg0) {
    if (D_003EA2D4 > 0) {
        D_003EA2D0 = D_003EA2D4;
    }
    D_003EA2D4 = arg0;
    return 0;
}
