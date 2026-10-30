/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_009488D0(s32);                             /* extern */
s32 func_00948C00();                                /* extern */

s64 func_0093C2B0(void) {
    return (s64) (func_009488D0(func_00948C00()) << 0x38) >> 0x38;
}
