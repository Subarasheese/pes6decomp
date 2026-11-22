/* compiler: ee-gcc-2.96 */
#include "types.h"

extern void func_001B4E98(s32, s32, s32, s32);

extern char D_005CC508[];

void func_001B50C8(s32 arg0, s32 arg1, s32 arg2) {
    func_001B4E98((*(s32 *)D_005CC508), arg0, arg1, arg2);
}
