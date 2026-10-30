/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001CD6B0(s32, s32);                        /* extern */

s32 func_009B34C0(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    return func_001CD6B0(-(s32) (fparg3 - fparg1), (s32) (fparg2 - fparg0)) & 0xFFFF;
}
