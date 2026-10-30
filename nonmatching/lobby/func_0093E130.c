/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00828690();                                /* extern */

s64 func_0093E130(void) {
    return (s64) (func_00828690() << 0x30) >> 0x30;
}
