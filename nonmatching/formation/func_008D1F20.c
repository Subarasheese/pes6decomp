/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_008D1F20(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 & 0xFF) + arg0), u8 *, 0xD);
}
