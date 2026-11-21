/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002F96F0(s32, s32);
s32 func_002F9F20(s32, s32, s32, s32, s32, s32);
extern s32 D_003EA518;
extern s32 *D_003EA51C[2];

void func_008FFA00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002F9F20(arg0, arg1, 1, func_002F96F0(*D_003EA51C[D_003EA518], 0), arg2, arg3);
}
