/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008C43B0();                                /* extern */
extern s32 D_003EA480;

s32 func_008C4370(void) {
    D_003EA480 = 1;
    if (func_008C43B0() != 2) {
        return 0;
    }
    D_003EA480 = 0;
    return 1;
}
