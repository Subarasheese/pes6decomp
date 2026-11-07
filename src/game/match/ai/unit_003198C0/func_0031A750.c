/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003E1510[];
s32 func_00338AD0(s32, void (*)(void), s32, void *);
void func_00338A20(s32, s32, s32);
void func_0031A660(void);

s32 func_0031A750(s32 arg) {
    func_00338A20(func_00338AD0(0x2D, func_0031A660, 7, D_003E1510), arg, 0);
    return 1;
}
