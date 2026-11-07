/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0051FE98[];
extern s32 D_0051FE9C[];
extern s32 D_0051FEA0[];
extern s32 D_0051FEA4[];
extern s32 D_0051FEA8[];
extern s8 D_0051FEAC[];
extern s32 func_00153FF0(s32 a, s32 size);
extern s32 func_00181200(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);

void func_00180950(void) {
    s32 size = (D_0051FE98[0] + 1) * 8;
    s32 buf;

    size = (size + 0x7FF) / 0x800 * 0x800;
    buf = func_00153FF0(0x40, size);
    D_0051FEA8[0] = buf;
    func_00181200(D_0051FEA4[0], D_0051FEA0[0], 0, D_0051FE9C[0], buf, size);
    D_0051FEAC[0] = 3;
}
