/* compiler: ee-gcc-2.96-G0 */
/* Adapted from gt4-decomp, src/runtime/unit_0059BE80/func_005B7120.c.
 * MIT licence. See THIRD_PARTY.md. */
#include "types.h"
s32 func_0019B530(s32 a);
s32 func_001A45A0(void) {
    u32 r = func_0019B530(4) & 0x10000;
    return r != 0;
}
