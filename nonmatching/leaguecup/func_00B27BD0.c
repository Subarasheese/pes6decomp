/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B270D0();                                /* extern */
extern s32 D_003EAD94;

s32 func_00B27BD0(void) {
    if (D_003EAD94 == 0) {
        return 2;
    }
    return func_00B270D0() & 0xFF;
}
