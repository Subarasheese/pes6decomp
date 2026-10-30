/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern s32 D_003EAA4C;

s32 func_00934400(void) {
    if ((func_0017F900() == 1) && (D_003EAA4C == 0)) {
        return 1;
    }
    return 0;
}
