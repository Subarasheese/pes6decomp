/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00167D30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9B4) != (s32) (arg0 + 0x9B4);
}
