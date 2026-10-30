/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE2D0(s32);
s32 func_0085F380(void *arg0) {
    if (func_002DE2D0(M2C_FIELD(arg0, s32 *, 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = -1;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        return 0;
    }
    return -0x21;
}
