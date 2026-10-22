/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00537AF8[];
void func_0020DA30(s32 arg0, s32 arg1, s32 arg2);

void func_0020D0C0(s32 arg0, s32 arg1, s32 arg2) {
    func_0020DA30(arg2, *(s32 *)D_00537AF8, arg1 + (arg0 << 5));
}
