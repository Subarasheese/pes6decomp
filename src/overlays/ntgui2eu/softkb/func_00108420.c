/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_0019DBD0(s32, s32, s32, s32, s32, s32, s32, s32);

extern char D_002CA1C0[];
extern char D_005F7720[];

void func_00108420(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 *entry;
    func_0019DBD0((s32)((void *)D_005F7720), arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    entry = (s8 *)(((s8 *)((void *)D_002CA1C0)) + 0);
    *((s8 *)(((s8 *)((void *)D_002CA1C0)) + 1)) = (*entry = 0);
}
