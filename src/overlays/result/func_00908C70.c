/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00921D44[];
extern s32 SD_call(s32);
extern void func_00908CF0(s32);

s32 func_00908C70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SD_call(-0x7BFF7BFF);
    func_00908CF0(arg3);
    D_00921D44[0] = 2;
    return 2;
}
