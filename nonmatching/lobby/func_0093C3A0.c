/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00948B40(s32);                             /* extern */
s32 func_00948C00();                                /* extern */

s32 func_0093C3A0(void) {
    return func_00948B40(func_00948C00()) & 0xFFFF;
}
