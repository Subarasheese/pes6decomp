/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001ED840(s32, M2C_UNK);                /* extern */
M2C_UNK func_001ED880(s32, f32);                    /* extern */
M2C_UNK func_001EDA30(s32, s32);                    /* extern */
M2C_UNK func_001EDAE0(s32, M2C_UNK);                /* extern */
s32 func_001EE0D0();                                /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_0026D3B0(s32 arg0, f32 fparg0) {
    s32 temp_v0;

    temp_v0 = func_001EE0D0();
    func_001EDAE0(temp_v0, 1);
    func_001EDA30(temp_v0, arg0);
    func_001ED880(temp_v0, fparg0);
    func_001ED840(temp_v0, 3);
    return temp_v0;
}
