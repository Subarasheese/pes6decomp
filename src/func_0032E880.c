/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_003E17B0[];
void func_0032DE80(void);
s32 func_00338AD0(s32 arg0, void *arg1, s32 arg2, void *arg3);
void func_00338AA0(s32 arg0, s32 arg1);
s32 func_0032E880(s32 arg0) {
    s32 r = func_00338AD0(0xB, func_0032DE80, 0x5, D_003E17B0);
    func_00338AA0(r, arg0);
    return 0x1;
}
