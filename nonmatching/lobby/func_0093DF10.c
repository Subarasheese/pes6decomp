/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00842B50();                                /* extern */

s32 func_0093DF10(void) {
    return ((s64) (func_00842B50() << 0x38) >> 0x38) == 1;
}
