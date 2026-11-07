/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_0015AE00(s32, s32);
void func_001622F8(s32, s32);
extern s32 D_011E6B0C;
extern s32 D_011E6B28;
extern s32 D_011E6B2C;
extern s32 D_011E6B38;

void func_0015AD40(s32 arg0, s32 arg1, s32 *arg2) {
    s32 t;

    if (func_0015AE00(arg0, arg1) != 0) {
        D_011E6B38 -= arg2[3] >> 4;
        if (D_011E6B38 < 0) {
            D_011E6B38 = 0;
        }
        t = D_011E6B2C - D_011E6B28;
        if (t < D_011E6B38) {
            D_011E6B38 = t;
        }
        func_001622F8(D_011E6B0C, D_011E6B38);
    }
}
