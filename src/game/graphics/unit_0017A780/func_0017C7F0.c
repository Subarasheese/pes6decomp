/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00131A40(s32, s32, f32);               /* extern */
f32 func_00131B60();                                /* extern */

void func_0017C7F0(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4);
    func_00131A40(temp_s0, arg1, func_00131B60());
}
