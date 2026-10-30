/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001314D0(s32);                             /* extern */
f32 func_001314E0(s32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_00131A40(void *arg0, s32 arg1, f32 fparg0) {
    if (func_001314D0(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, f32 *, 8) = fparg0;
        M2C_FIELD(arg0, f32 *, 0x10) = func_001314E0(arg1);
        M2C_FIELD(arg0, s8 *, 0x1C) = 0;
        M2C_FIELD(arg0, s8 *, 0x1E) = 0;
        M2C_FIELD(arg0, s8 *, 0x1D) = 0;
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 0;
}
