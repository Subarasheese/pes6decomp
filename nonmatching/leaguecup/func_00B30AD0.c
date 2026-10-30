/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B317D0();                                /* extern */
extern s32 D_003EADA0;

s32 func_00B30AD0(void) {
    if (D_003EADA0 == 0) {
        return 1;
    }
    return func_00B317D0() & 0xFF;
}
