/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003E1510[];
s32 func_00338AD0(s32, void (*)(void), s32, void *);
void func_00338AA0(s32, s32);
void func_0031A310(void);

s32 func_0031A3D0(s32 arg) {
    func_00338AA0(func_00338AD0(0x1A, func_0031A310, 4, D_003E1510), arg);
    return 0;
}
