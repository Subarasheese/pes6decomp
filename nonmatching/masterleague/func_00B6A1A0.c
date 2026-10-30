/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B6A2A0();                                /* extern */
extern s32 D_003EAEE8;

s32 func_00B6A1A0(void) {
    if (D_003EAEE8 == 0) {
        return 1;
    }
    return func_00B6A2A0();
}
