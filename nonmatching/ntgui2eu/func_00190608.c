/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00190608(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 8) * 0x10)) - M2C_FIELD(arg0, s32 *, 4);
}
