/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00115720(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x50) | ((M2C_FIELD(arg0, u8 *, 0x52) << 5) & 0x80);
}
