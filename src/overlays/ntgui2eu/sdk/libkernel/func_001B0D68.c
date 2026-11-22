/* compiler: ee-gcc-2.96 */
#include "types.h"

extern s32 func_001B0B30(s32, s32, s32, s32, s32, s32, s32, s32);

extern char D_005CC508[];

s32 func_001B0D68(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    return func_001B0B30((*(s32 *)D_005CC508), arg0, arg1, arg2, arg4, arg5, arg6, arg7);
}
