/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001CD6B0(s32, s32);                        /* extern */

s32 func_009B3440(void *arg0, f32 fparg0, f32 fparg1) {
    return func_001CD6B0(-(s32) (fparg1 - M2C_FIELD(arg0, f32 *, 0x18)), (s32) (fparg0 - M2C_FIELD(arg0, f32 *, 0x10))) & 0xFFFF;
}
