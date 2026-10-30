/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001735E8(void *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), s32 *, 4) & 1;
}
