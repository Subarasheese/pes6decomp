/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EB2D4;

s32 func_00CE9EC0(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 0x10) {
        M2C_FIELD((D_003EB2D4 + (arg0 * 0xC)), s32 *, 4) = arg1;
        return 1;
    }
    return 0;
}
