/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAD44;

u8 func_00AEE7D0(s32 arg0) {
    if (D_003EAD44 != 0) {
        return M2C_FIELD((((arg0 & 0xFF) * 4) + D_003EAD44), u8 *, 0x2304);
    }
    return 0U;
}
