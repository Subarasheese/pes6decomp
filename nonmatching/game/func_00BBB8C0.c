/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00151FC0(s32, s32);
extern u32 func_00151FA0(s32);
s32 func_00151D80(M2C_UNK, M2C_UNK);                /* extern */
extern s32 D_003EA778;

s32 func_00BBB8C0(s32 arg0) {
    s32 temp_s0;
    s32 var_hi;
    s32 var_v0;

    func_00151FC0(1, D_003EA778);
    temp_s0 = func_00151D80(1, 0x7FFF) & 0xFFFF;
    D_003EA778 = func_00151FA0(1);
    if (arg0 != 0) {
        if (arg0 < 0) {
            var_hi = (s32) -temp_s0 % (s32) -arg0;
        } else {
            var_hi = temp_s0 % arg0;
        }
        var_v0 = var_hi;
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
