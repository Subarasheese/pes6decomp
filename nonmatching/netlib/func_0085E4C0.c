/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA358;

s32 func_0085E4C0(s64 arg0) {
    if (D_003EA358 != 0) {
        return M2C_FIELD(((((s64) (arg0 << 0x30) >> 0x30) * 4) + D_003EA358), s32 *, 0xC);
    }
    return -1;
}
