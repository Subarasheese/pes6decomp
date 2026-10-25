/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E17B0[];
s32 func_00329B00(s32);
s32 func_00338AD0(s32, s32 (*)(s32), s32, s32 *);
void func_00338A20(s32, s32, s32);

s32 func_0032E260(s32 a) {
    func_00338A20(func_00338AD0(0xF, func_00329B00, 7, D_003E17B0), a, 0);
    return 1;
}
