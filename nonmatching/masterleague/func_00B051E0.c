/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B05280();                                /* extern */

s32 func_00B051E0(void) {
    return ((func_00B05280() & 0xFFFF) * 3) & 0xFFFF;
}
