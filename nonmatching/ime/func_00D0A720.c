/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D083A0(s32);                             /* extern */

s32 func_00D0A720(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_00D083A0(arg0 + 0x808);
}
