/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_0018A128(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFFF8000) | arg1;
    return arg0;
}
