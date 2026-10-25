/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003E15C0[];
void func_00333620(s32, s32);
s32 func_00338AD0(s32, void *, s32, void *);
void func_00338AA0(s32, s32);
void func_0031EBF0(void);

s32 func_0031EE10(s32 arg) {
    func_00333620(2, 1);
    func_00338AA0(func_00338AD0(7, func_0031EBF0, 3, D_003E15C0), arg);
    return 1;
}
