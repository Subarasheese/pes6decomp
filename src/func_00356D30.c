/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9F90;
extern s32 D_003E6448[];
s32 func_00356920(s32);
void func_003387D0(s32, s32 (*)(s32), s32 *);

s32 func_00356D30(s32 a) {
    D_003E9F90 = 0;
    func_003387D0(a, func_00356920, D_003E6448);
    return 1;
}
