/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0027D0B0(s32, M2C_UNK);                /* extern */
extern char D_00591E70[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_00B35AA0(s32 *arg0) {
    f32 temp_f20;
    s32 var_s0;

    var_s0 = 0;
    func_0027D0B0(*arg0, 0xC);
    temp_f20 = (*(f32 *)D_00591E70);
    func_0027D0B0(*arg0, 0xD);
    if ((temp_f20 < -128.0f) && ((*(f32 *)D_00591E70) < -128.0f)) {
        var_s0 = 1;
    }
    return var_s0;
}
