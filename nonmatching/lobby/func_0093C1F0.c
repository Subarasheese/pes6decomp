/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009489D0(s32);                             /* extern */
s32 func_00948C00();                                /* extern */

s32 func_0093C1F0(void) {
    return func_009489D0(func_00948C00()) & 0xFF;
}
