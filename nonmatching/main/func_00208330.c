/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

s32 func_00208330(s32 arg0) {
    return M2C_FIELD((((arg0 & 0xFFFF) * 4) + D_003E74CC), s32 *, 4);
}
