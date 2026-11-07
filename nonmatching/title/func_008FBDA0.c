/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FBDA0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x87C);
}
