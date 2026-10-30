/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0024FB20(s32, s32, s32, s32);
void func_002519B0(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    u32 var_a1;

    var_a1 = arg1;
    if (var_a1 >= 0x80U) {
        var_a1 = 0x7F;
    }
    temp_a0 = var_a1 | (arg0 << 8) | ((arg2 & 0xFF) << 0x10);
    func_0024FB20(temp_a0, temp_a0 | ((arg3 & 0xFF) << 0x18), 0, 0);
}
