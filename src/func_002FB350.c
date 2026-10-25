/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9E70;
extern s32 D_003E9E74;
extern s32 D_005EAAA0[];
extern char D_005E9AA0[];
s32 func_0012AF40(s32, s32, s32);
s32 func_0012AE10(void (*)(void), void *, s32, s32, s32, s32);
void func_002FBA60(void);

void func_002FB350(void) {
    D_003E9E74 = func_0012AF40(1, 0, 0);
    D_005EAAA0[0] = func_0012AE10(func_002FBA60, D_005E9AA0, 0x1000, 0x1E, 0, 0);
    D_003E9E70 = 1;
}
