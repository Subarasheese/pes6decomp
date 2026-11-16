/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern u32 func_001CDA50(s32);
s32 func_0020C6E0(void *, s32, s32, s32, s32, s32, s32);
M2C_UNK func_0020CDC0();
extern char D_003A8EB0[];
extern s32 D_003D4240[];

extern s32 D_00537AE0[];


void func_0020CC80(void) {
    s32 sp40[3];
    s32 *var_s1;
    s32 i;

    func_0020CDC0();
    if (D_00537AE0[0] == 0) {
        D_00537AE0[0] = func_0020C6E0(D_003A8EB0, 0xA, 0x21, 0, 0, 0, 0);
    }
    if (D_00537AE0[1] == 0) {
        D_00537AE0[1] = func_0020C6E0(D_003A8EB0, 0xA, 0x18, 0, 0, 0, 0);
    }
    if (func_001CDA50(1) != 5) {
        var_s1 = (D_003D4240 + 4);
    } else {
        var_s1 = D_003D4240;
    }
    for (i = 0; i < 3; i++) {
        sp40[i] = func_001F08B0(var_s1[i]);
    }
    D_00537AE0[2] = func_0020C6E0(sp40, 3, 0x17, 0, 0, 0, 0);
}
