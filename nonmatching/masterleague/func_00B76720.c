/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAF00;

s32 func_00B76720(s32 arg0) {
    if (D_003EAF00 != 0) {
        return M2C_FIELD((((arg0 & 0xFF) * 4) + D_003EAF00), s32 *, 0x918);
    }
    return 0;
}
