/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_003E1510[];
void func_0031A840(void);
s32 func_00338AD0(s32 arg0, void *arg1, s32 arg2, void *arg3);
void func_00338AA0(s32 arg0, s32 arg1);
s32 func_0031A980(s32 arg0) {
    s32 r = func_00338AD0(0x12, func_0031A840, 0x4, D_003E1510);
    func_00338AA0(r, arg0);
    return 0x1;
}
