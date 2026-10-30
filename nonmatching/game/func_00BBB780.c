/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00151FC0(s32, s32);
extern u32 func_00151FA0(s32);
s32 func_00151D80(M2C_UNK, M2C_UNK);                /* extern */
extern s32 D_003EA778;

s32 func_00BBB780(s64 arg0) {
    s32 temp_s0;

    func_00151FC0(1, D_003EA778);
    temp_s0 = func_00151D80(1, 0x7FFF) & 0xFFFF;
    D_003EA778 = func_00151FA0(1);
    return (temp_s0 % 100) < ((s64) (arg0 << 0x30) >> 0x30);
}
