/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B2B670();                                /* extern */
extern s32 D_003EAD98;

s32 func_00B2C230(void) {
    if (D_003EAD98 == 0) {
        return 2;
    }
    return func_00B2B670() & 0xFF;
}
