/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002EBF10(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x190C) != 1) {
        return M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914);
    }
    return M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1910);
}
