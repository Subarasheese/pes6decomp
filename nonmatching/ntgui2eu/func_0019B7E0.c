/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_001AD828();                               /* extern */

s32 func_0019B7E0(void) {
    *func_001AD828() = 5;
    return -1;
}
