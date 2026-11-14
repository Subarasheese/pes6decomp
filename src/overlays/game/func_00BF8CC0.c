/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0029A000(s32);
extern void func_0027B270(void *, s32);
extern void func_0027B450(void *, s32, s32);
extern u8 *func_00299FE0(s32);
extern void func_0029A020(s32);
extern s32 func_00BA9430(s32);
extern void **D_00CBD7B0[];

s32 func_00BF8CC0(void) {
    if ((func_00299FE0(0)[4] == 1) && (D_00CBD7B0[0] != NULL)) {
        func_0027B270(*D_00CBD7B0[0], 0x8CB4);
        func_0029A000(0);
    }
    func_0029A020(0);
    D_00CBD7B0[0] = (void **)func_00299FE0(0);
    func_0027B450(*D_00CBD7B0[0], 4, func_00BA9430(1));
    *(s32 *)((u8 *)*D_00CBD7B0[0] + 0x2C) = 0;
    return 1;
}
