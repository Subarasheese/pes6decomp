/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B23150();                                /* extern */
extern s32 D_003EAD90;

s32 func_00B23D20(void) {
    if (D_003EAD90 == 0) {
        return 2;
    }
    return func_00B23150() & 0xFF;
}
