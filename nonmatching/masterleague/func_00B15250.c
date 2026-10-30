/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B27200(s32);                             /* extern */
extern s32 D_003EADF0;

s32 func_00B15250(s32 arg0, s32 arg1) {
    if (D_003EADF0 != 0) {
        return func_00B27200((arg1 & 0xFF) + ((arg0 & 0xFF) << 5)) & 0xFFFF;
    }
    return 0;
}
