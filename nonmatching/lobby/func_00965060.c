/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00842B30();                                /* extern */

s64 func_00965060(void) {
    return (s64) (func_00842B30() << 0x38) >> 0x38;
}
