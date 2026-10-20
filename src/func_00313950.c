/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_003E1500[];
void func_00313880(void);
s32 func_00338AD0(s32 arg0, void *arg1, s32 arg2, void *arg3);
void func_00338AA0(s32 arg0, s32 arg1);
s32 func_00313950(s32 arg0) {
    s32 r = func_00338AD0(0x19, func_00313880, 0x8, D_003E1500);
    func_00338AA0(r, arg0);
    return 0x1;
}
