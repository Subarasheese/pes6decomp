/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00840E80();                                /* extern */

s64 func_009658F0(void) {
    return (s64) (func_00840E80() << 0x38) >> 0x38;
}
