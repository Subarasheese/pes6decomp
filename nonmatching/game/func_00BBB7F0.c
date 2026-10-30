/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00151FC0(s32, s32);
extern u32 func_00151FA0(s32);
s32 func_00151D80(M2C_UNK, M2C_UNK);                /* extern */
extern s32 D_003EA778;

s32 func_00BBB7F0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_hi;
    s32 var_s1;

    func_00151FC0(1, D_003EA778);
    temp_s0 = func_00151D80(1, 0x7FFF) & 0xFFFF;
    temp_v0 = func_00151FA0(1);
    temp_v1 = arg0 + 1;
    D_003EA778 = temp_v0;
    if (temp_v1 != 0) {
        if (temp_v1 < 0) {
            var_hi = (s32) -temp_s0 % (s32) -temp_v1;
        } else {
            var_hi = temp_s0 % temp_v1;
        }
        var_s1 = var_hi;
    } else {
        var_s1 = 0;
    }
    func_00151FC0(1, (s32) ((s64) ((s64) temp_v0 << 0x20) >> 0x20));
    temp_s0_2 = func_00151D80(1, 0x7FFF) & 0xFFFF;
    D_003EA778 = func_00151FA0(1);
    if ((temp_s0_2 % 100) >= 0x32) {
        var_s1 = -var_s1;
    }
    return var_s1;
}
