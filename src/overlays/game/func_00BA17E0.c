/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

extern void func_0017FA00(s32, char *, s32, s32);
extern s32 D_00CBCEC0[];
extern s32 D_00CBCEC4[];
extern char func_00BA1740[];

void func_00BA17E0(void) {
    if (D_00CBCEC4[0] == 0) {
        func_0017FA00(D_00CBCEC0[0], func_00BA1740, 0, 0);
    }
}
