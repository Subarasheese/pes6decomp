/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00151FC0(s32, s32);
extern u32 func_00151FA0(s32);
s32 func_00151D80(M2C_UNK, M2C_UNK);
extern s32 D_003EA778;

s32 func_00BBB8C0(s32 arg0) {
    s32 temp_s0;
    s32 r;

    func_00151FC0(1, D_003EA778);
    temp_s0 = func_00151D80(1, 0x7FFF) & 0xFFFF;
    D_003EA778 = func_00151FA0(1);
    if (arg0 == 0) {
        r = 0;
    } else if (arg0 < 0) {
        r = -temp_s0 % -arg0;
    } else {
        r = temp_s0 % arg0;
    }
    return r;
}
