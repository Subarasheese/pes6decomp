/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002F96F0(s32, s32);
s32 func_002F9F20(s32, s32, s32, s32, s32, s32);
extern s32 D_003EA550;
extern s32 *D_003EA554[2];

void func_0091C9E0(s32 arg0, s32 unused1, s32 arg2, s32 arg3) {
    func_002F9F20(arg0, 1, 0, func_002F96F0(*D_003EA554[D_003EA550], 0), arg2, arg3);
}
