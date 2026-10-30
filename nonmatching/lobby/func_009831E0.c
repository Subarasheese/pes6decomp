/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern s32 D_003EACD0;

s32 func_009831E0(void) {
    if (func_0017F900() != 0) {
        D_003EACD0 = 0;
        return 1;
    }
    return 0;
}
